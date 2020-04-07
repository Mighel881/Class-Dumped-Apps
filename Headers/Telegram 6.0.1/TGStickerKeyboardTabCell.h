//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TGImageView, TGLetteredAvatarView, TGStickerKeyboardPallete;

@interface TGStickerKeyboardTabCell : UICollectionViewCell
{
    TGImageView *_imageView;
    TGLetteredAvatarView *_avatarView;
    int _style;
    _Bool _favorite;
    _Bool _recent;
    TGStickerKeyboardPallete *_pallete;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setInnerAlpha:(double)arg1;
- (void)setStyle:(int)arg1;
- (void)setUrl:(id)arg1 peerId:(long long)arg2 title:(id)arg3;
- (void)setDocumentMedia:(id)arg1;
- (void)setNone;
- (void)setRecent;
- (void)setFavorite;
- (void)setSelected:(_Bool)arg1;
- (void)_updateIcon:(id)arg1;
- (void)prepareForReuse;
- (void)setPallete:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
