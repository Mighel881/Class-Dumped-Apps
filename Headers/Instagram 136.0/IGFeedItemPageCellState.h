//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSeenStateStore, NSDictionary;

@interface IGFeedItemPageCellState : NSObject
{
    _Bool _expandedCaption;
    _Bool _videoAudioEnabled;
    _Bool _ctaHighlighted;
    long long _currentItemIndex;
    long long _previousItemIndex;
    long long _carouselStartingIndex;
    IGSeenStateStore *_seenStateStore;
    NSDictionary *_visibleRangesMap;
}

@property(copy, nonatomic) NSDictionary *visibleRangesMap; // @synthesize visibleRangesMap=_visibleRangesMap;
@property(nonatomic) __weak IGSeenStateStore *seenStateStore; // @synthesize seenStateStore=_seenStateStore;
@property(nonatomic) _Bool ctaHighlighted; // @synthesize ctaHighlighted=_ctaHighlighted;
@property(nonatomic) _Bool videoAudioEnabled; // @synthesize videoAudioEnabled=_videoAudioEnabled;
@property(nonatomic) _Bool expandedCaption; // @synthesize expandedCaption=_expandedCaption;
@property(nonatomic) long long carouselStartingIndex; // @synthesize carouselStartingIndex=_carouselStartingIndex;
@property(nonatomic) long long previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
@property(nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
- (void).cxx_destruct;

@end

