//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryMusicAudioIndicatorView, IGStoryMusicBrowserRoundedImageView;

@interface IGStoryMusicAlbumArtAudioIndicatorView : UIView
{
    unsigned long long _style;
    IGStoryMusicBrowserRoundedImageView *_albumArtImageView;
    IGStoryMusicAudioIndicatorView *_audioIndicatorView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shadowHidden;
@property(nonatomic) _Bool audioIndicatorHidden;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1 albumArtURL:(id)arg2;

@end

