//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTWatchPlatformWatchDevice : NSObject
{
    NSString *_systemVersion;
    NSString *_name;
    NSString *_model;
    NSString *_localizedModel;
    NSString *_systemName;
    NSString *_hardwareModel;
}

@property(readonly, copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(readonly, copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(readonly, copy, nonatomic) NSString *localizedModel; // @synthesize localizedModel=_localizedModel;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

