//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AWEStickerAuthorView : UIView
{
    UIImageView *_designerIconView;
    UILabel *_designerLabel;
    UIImageView *_arrowImageView;
    UILabel *_authorLabel;
}

@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *designerLabel; // @synthesize designerLabel=_designerLabel;
@property(retain, nonatomic) UIImageView *designerIconView; // @synthesize designerIconView=_designerIconView;
- (void).cxx_destruct;
- (void)configWithStickerDetailModel:(id)arg1;
- (void)addSubviews;
- (void)addSubviews_D;
- (id)initWithFrame:(struct CGRect)arg1;

@end
