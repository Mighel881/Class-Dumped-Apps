//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSMutableDictionary, NSString;
@protocol TIPImageCodec;

@interface TIPPartialImageCodecDetector : NSObject
{
    unsigned long long _expectedDataLength;
    struct CGImageSource *_codecDetectionImageSource;
    NSMutableDictionary *_potentialCodecs;
    NSMutableData *_codecDetectionBuffer;
    id <TIPImageCodec> _detectedCodec;
    NSString *_detectedImageType;
}

@property(readonly, copy, nonatomic) NSString *detectedImageType; // @synthesize detectedImageType=_detectedImageType;
@property(readonly, nonatomic) id <TIPImageCodec> detectedCodec; // @synthesize detectedCodec=_detectedCodec;
@property(readonly, nonatomic) NSMutableData *codecDetectionBuffer; // @synthesize codecDetectionBuffer=_codecDetectionBuffer;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)appendData:(id)arg1 final:(_Bool)arg2;
- (id)initWithExpectedDataLength:(unsigned long long)arg1;

@end

