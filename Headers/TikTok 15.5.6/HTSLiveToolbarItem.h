//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSString, UIImage, UIView;

@interface HTSLiveToolbarItem : NSObject
{
    _Bool _isSelected;
    _Bool _isSupportHide;
    _Bool _disabled;
    _Bool _hideWhenTapped;
    _Bool _showRedDot;
    _Bool _hidden;
    NSString *_groupTitle;
    NSString *_identifier;
    NSString *_title;
    NSString *_selectedTitle;
    UIImage *_itemImage;
    UIImage *_selectedItemImage;
    UIView *_customItemView;
    UIView *_customItemViewForExpandLandscape;
    long long _priority;
    CDUnknownBlockType _onItemTapped;
    CDUnknownBlockType _onItemShow;
    CDUnknownBlockType _onDisplay;
    NSString *_lottieName;
    NSBundle *_lottieResrouceBundle;
    NSString *_lottieFilePath;
    struct CGSize _customSize;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSString *lottieFilePath; // @synthesize lottieFilePath=_lottieFilePath;
@property(retain, nonatomic) NSBundle *lottieResrouceBundle; // @synthesize lottieResrouceBundle=_lottieResrouceBundle;
@property(retain, nonatomic) NSString *lottieName; // @synthesize lottieName=_lottieName;
@property(nonatomic) _Bool showRedDot; // @synthesize showRedDot=_showRedDot;
@property(copy, nonatomic) CDUnknownBlockType onDisplay; // @synthesize onDisplay=_onDisplay;
@property(copy, nonatomic) CDUnknownBlockType onItemShow; // @synthesize onItemShow=_onItemShow;
@property(copy, nonatomic) CDUnknownBlockType onItemTapped; // @synthesize onItemTapped=_onItemTapped;
@property(nonatomic) _Bool hideWhenTapped; // @synthesize hideWhenTapped=_hideWhenTapped;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) struct CGSize customSize; // @synthesize customSize=_customSize;
@property(retain, nonatomic) UIView *customItemViewForExpandLandscape; // @synthesize customItemViewForExpandLandscape=_customItemViewForExpandLandscape;
@property(retain, nonatomic) UIView *customItemView; // @synthesize customItemView=_customItemView;
@property(retain, nonatomic) UIImage *selectedItemImage; // @synthesize selectedItemImage=_selectedItemImage;
@property(retain, nonatomic) UIImage *itemImage; // @synthesize itemImage=_itemImage;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool isSupportHide; // @synthesize isSupportHide=_isSupportHide;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *selectedTitle; // @synthesize selectedTitle=_selectedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end
