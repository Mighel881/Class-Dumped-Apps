//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TGLocationSignals : NSObject
{
}

+ (id)userLocation:(id)arg1;
+ (id)lastKnownUserLocation;
+ (void)storeLastKnownUserLocation:(id)arg1;
+ (id)driveEta:(struct CLLocationCoordinate2D)arg1;
+ (id)cityForCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)reverseGeocodeCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (id)geocodeAddressDictionary:(id)arg1;
+ (id)geocodeAddress:(id)arg1;

@end
