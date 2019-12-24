//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ScoreResult : NSObject
{
    int _userNote;
    int _userCent;
    int _userOctave;
    int _refNote;
    int _refCent;
    int _sentenceIndex;
    double _sentenceScore;
    double _songScore;
    double _userPitch;
    double _userFrequency;
    double _refPitch;
    double _refFrequency;
}

@property(nonatomic) int sentenceIndex; // @synthesize sentenceIndex=_sentenceIndex;
@property(nonatomic) double refFrequency; // @synthesize refFrequency=_refFrequency;
@property(nonatomic) int refCent; // @synthesize refCent=_refCent;
@property(nonatomic) int refNote; // @synthesize refNote=_refNote;
@property(nonatomic) double refPitch; // @synthesize refPitch=_refPitch;
@property(nonatomic) double userFrequency; // @synthesize userFrequency=_userFrequency;
@property(nonatomic) int userOctave; // @synthesize userOctave=_userOctave;
@property(nonatomic) int userCent; // @synthesize userCent=_userCent;
@property(nonatomic) int userNote; // @synthesize userNote=_userNote;
@property(nonatomic) double userPitch; // @synthesize userPitch=_userPitch;
@property(nonatomic) double songScore; // @synthesize songScore=_songScore;
@property(nonatomic) double sentenceScore; // @synthesize sentenceScore=_sentenceScore;
- (id)initWithRealtimeInfo:(struct RealtimeInfo)arg1;

@end
