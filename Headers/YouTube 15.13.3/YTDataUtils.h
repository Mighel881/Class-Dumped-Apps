//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTDataUtils : NSObject
{
}

+ (id)identifierForConversionTracking;
+ (id)identifierForAdvertising;
+ (_Bool)isAdvertisingTrackingEnabled;
+ (int)selectAdSenseiTagOnWiFi:(_Bool)arg1;
+ (void)initializeAdShieldSignalsLibrary;
+ (id)sdkVersionForAdShieldLibrary;
+ (id)spamSignalsDictionary;
+ (id)touchSpamSignals:(id)arg1;
+ (id)deviceSignals;
+ (id)adSenseClientParametersOnWiFi:(_Bool)arg1;
+ (id)englishStringWithConnectionType:(int)arg1;
+ (id)generateClientSideNonce;

@end
