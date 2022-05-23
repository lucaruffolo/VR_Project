using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cycle : MonoBehaviour
{
    private float timeMultiplier = 500f;
    private float startHour = 12f;
    private DateTime currentTime;

    public Light sun;
    private float sunriseHour = 7f;
    private float sunsetHour = 20.5f;
    private TimeSpan sunrise;
    private TimeSpan sunset;
    // Start is called before the first frame update
    void Start()
    {
        currentTime = DateTime.Now.Date + TimeSpan.FromHours(startHour);

        sunrise = TimeSpan.FromHours(sunriseHour);
        sunset = TimeSpan.FromHours(sunsetHour);
    }

    // Update is called once per frame
    void Update()
    {
        UpdateTimeOfDay();
        RotateSun();
    }
    void UpdateTimeOfDay()
    {
        currentTime = currentTime.AddSeconds(Time.deltaTime * timeMultiplier);
    }

    private void RotateSun()
    {
        float sunRotation;
        if(currentTime.TimeOfDay > sunrise && currentTime.TimeOfDay < sunset)
        {
            TimeSpan sunriseToSunset = CalculateTimeDifference(sunrise, sunset);
            TimeSpan timeSinceSunrise = CalculateTimeDifference(sunrise, currentTime.TimeOfDay);

            double percentage = timeSinceSunrise.TotalMinutes / sunriseToSunset.TotalMinutes;

            sunRotation = Mathf.Lerp(0, 180, (float)percentage);
        }
        else
        {
            TimeSpan sunsetToSunrise = CalculateTimeDifference(sunset, sunrise);
            TimeSpan timeSinceSunset = CalculateTimeDifference(sunset, currentTime.TimeOfDay);

            double percentage = timeSinceSunset.TotalMinutes / sunsetToSunrise.TotalMinutes;

            sunRotation = Mathf.Lerp(180, 360, (float)percentage);
        }
        sun.transform.rotation = Quaternion.AngleAxis(sunRotation, Vector3.right);
    }

    private TimeSpan CalculateTimeDifference(TimeSpan fromTime, TimeSpan toTime)
    {
        TimeSpan difference = toTime - fromTime;

        if(difference.TotalSeconds < 0)
        {
            difference += TimeSpan.FromHours(24);
        }

        return difference;
    }
}
