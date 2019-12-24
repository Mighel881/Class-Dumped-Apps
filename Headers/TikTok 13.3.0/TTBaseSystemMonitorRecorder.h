//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTBaseSystemMonitorRecorder : NSObject
{
    NSString *_type;
    double _value;
    double _monitorInterval;
}

+ (id)latestActionKey:(id)arg1;
@property(nonatomic) double monitorInterval; // @synthesize monitorInterval=_monitorInterval;
@property(nonatomic) double value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)handleAppEnterForground;
- (void)handleAppEnterBackground;
- (void)recordIfNeeded:(_Bool)arg1;
- (_Bool)isEnabled;
- (id)label;

@end
