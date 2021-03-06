//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableData;

@interface ASTS3VoiceStreamBuffer : NSObject
{
    _Bool _isPreamble;
    NSMutableData *_dataBuffer;
    NSDate *_lastStreamRequestTimestamp;
}

@property(retain, nonatomic) NSDate *lastStreamRequestTimestamp; // @synthesize lastStreamRequestTimestamp=_lastStreamRequestTimestamp;
@property(retain, nonatomic) NSMutableData *dataBuffer; // @synthesize dataBuffer=_dataBuffer;
@property(nonatomic) _Bool isPreamble; // @synthesize isPreamble=_isPreamble;
- (void).cxx_destruct;
- (id)flushDataToS3Request;
- (void)appendData:(id)arg1 isPreamble:(_Bool)arg2;

@end

