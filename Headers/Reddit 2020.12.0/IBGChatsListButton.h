//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class IBGChatsListButtonView;

@interface IBGChatsListButton : UIButton
{
    IBGChatsListButtonView *_contentView;
}

@property(retain, nonatomic) IBGChatsListButtonView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)setUnreadCount:(unsigned long long)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
