//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TAVPlaybackObserver-Protocol.h>

@interface T1VideoPreviewImageExtractor : NSObject <TAVPlaybackObserver>
{
    _Bool _active;
    CDUnknownBlockType _completion;
}

+ (id)imageExtractorForSource:(id)arg1 account:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (_Bool)_t1_isAnyVideoDataDownloadedInsideLoadedTimeRanges:(id)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end

