# Generated by Django 4.2.14 on 2025-01-17 14:44

import app.models
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('app', '0001_initial'),
    ]

    operations = [
        migrations.AlterField(
            model_name='profile',
            name='gender',
            field=models.CharField(choices=[('M', 'Male'), ('F', 'Female'), ('O', 'Other')], max_length=1),
        ),
        migrations.AlterField(
            model_name='profile',
            name='job_city',
            field=models.CharField(choices=[('Kathmandu', 'Kathmandu'), ('Dolakha', 'Dolakha')], max_length=50),
        ),
        migrations.AlterField(
            model_name='profile',
            name='mobile',
            field=models.CharField(help_text='Enter a 10-digit number', max_length=10),
        ),
        migrations.AlterField(
            model_name='profile',
            name='pin',
            field=models.PositiveIntegerField(help_text='Enter a six-digit code', validators=[app.models.validate_pin_length]),
        ),
        migrations.AlterField(
            model_name='profile',
            name='state',
            field=models.CharField(choices=[('State1', 'State 1'), ('State2', 'State 2'), ('State3', 'State 3')], max_length=100),
        ),
    ]
