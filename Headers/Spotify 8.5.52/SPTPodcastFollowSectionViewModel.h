//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastViewModelSection-Protocol.h"

@class NSString, SPTPodcast;
@protocol SPTPodcastFollowSectionViewModelDelegate;

@interface SPTPodcastFollowSectionViewModel : NSObject <SPTPodcastViewModelSection>
{
    _Bool _playing;
    double _headerHeight;
    id <SPTPodcastFollowSectionViewModelDelegate> _delegate;
    SPTPodcast *_podcast;
}

@property(retain, nonatomic) SPTPodcast *podcast; // @synthesize podcast=_podcast;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) __weak id <SPTPodcastFollowSectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (long long)identifier;
- (void)updateWithPodcast:(id)arg1;
@property(readonly, nonatomic, getter=isFollowingPodcast) _Bool followingPodcast;
- (void)updateWithPodcastPlayer:(id)arg1;
- (void)contextMenuButtonSelected:(id)arg1;
- (void)playbackButtonSelected;
- (void)followButtonSelected;
- (id)header;
- (unsigned long long)numberOfRows;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
