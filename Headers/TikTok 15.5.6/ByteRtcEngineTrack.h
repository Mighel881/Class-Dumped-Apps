//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ByteRtcEngineTrack : NSObject
{
    _Bool _isConsole;
    CDUnknownBlockType _TTMonitorCallBack;
    CDUnknownBlockType _ByteLogCallBack;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType ByteLogCallBack; // @synthesize ByteLogCallBack=_ByteLogCallBack;
@property(nonatomic) _Bool isConsole; // @synthesize isConsole=_isConsole;
@property(copy, nonatomic) CDUnknownBlockType TTMonitorCallBack; // @synthesize TTMonitorCallBack=_TTMonitorCallBack;
- (void).cxx_destruct;

@end
