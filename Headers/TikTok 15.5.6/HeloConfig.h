//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HeloAppConfig, NSString;

@interface HeloConfig : NSObject
{
    HeloAppConfig *_appConfig;
    NSString *_hostDomain;
    NSString *_heloClientKey;
    NSString *_hostClientKey;
}

@property(copy, nonatomic) NSString *hostClientKey; // @synthesize hostClientKey=_hostClientKey;
@property(copy, nonatomic) NSString *heloClientKey; // @synthesize heloClientKey=_heloClientKey;
@property(copy, nonatomic) NSString *hostDomain; // @synthesize hostDomain=_hostDomain;
@property(retain, nonatomic) HeloAppConfig *appConfig; // @synthesize appConfig=_appConfig;
- (void).cxx_destruct;

@end
