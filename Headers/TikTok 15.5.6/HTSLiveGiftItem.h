//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSEventContext, LiveRoomModel, NSArray, NSAttributedString, NSNumber, NSString, UIColor, UIFont;
@protocol HTSLiveGiftActions, HTSLiveGiftItemCollectionViewModelDelegate, IESLiveToastFactory;

@interface HTSLiveGiftItem : NSObject
{
    _Bool _canCombo;
    _Bool _canGroup;
    _Bool _canDoodle;
    _Bool _hideAfterConsume;
    _Bool _comboAfterHide;
    _Bool _available;
    _Bool _selected;
    _Bool _selectedChanged;
    _Bool _consumed;
    _Bool _sended;
    NSNumber *_giftID;
    NSString *_title;
    UIColor *_titleColor;
    NSString *_subtitle;
    UIColor *_subtitleColor;
    UIFont *_subtitleFont;
    NSAttributedString *_attributedSubtitle;
    NSArray *_subtitleIconList;
    NSArray *_imageURLList;
    NSArray *_labelURLList;
    NSString *_availabelHint;
    NSNumber *_balance;
    NSNumber *_price;
    NSString *_itemSchemaURL;
    id <HTSLiveGiftItemCollectionViewModelDelegate> _delegate;
    id _domainModel;
    LiveRoomModel *_room;
    HTSEventContext *_eventContext;
    NSNumber *_missionPrice;
    NSString *_clickEventName;
    long long _propType;
    id <HTSLiveGiftActions> _actionCreator;
    id <IESLiveToastFactory> _toastFactory;
}

+ (id)itemFromModel:(id)arg1;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveGiftActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(nonatomic) _Bool sended; // @synthesize sended=_sended;
@property(nonatomic) long long propType; // @synthesize propType=_propType;
@property(copy, nonatomic) NSString *clickEventName; // @synthesize clickEventName=_clickEventName;
@property(retain, nonatomic) NSNumber *missionPrice; // @synthesize missionPrice=_missionPrice;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(retain, nonatomic) id domainModel; // @synthesize domainModel=_domainModel;
@property(nonatomic) _Bool consumed; // @synthesize consumed=_consumed;
@property(nonatomic) _Bool selectedChanged; // @synthesize selectedChanged=_selectedChanged;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(nonatomic) _Bool comboAfterHide; // @synthesize comboAfterHide=_comboAfterHide;
@property(nonatomic) __weak id <HTSLiveGiftItemCollectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *itemSchemaURL; // @synthesize itemSchemaURL=_itemSchemaURL;
@property(nonatomic) _Bool hideAfterConsume; // @synthesize hideAfterConsume=_hideAfterConsume;
@property(nonatomic) _Bool canDoodle; // @synthesize canDoodle=_canDoodle;
@property(nonatomic) _Bool canGroup; // @synthesize canGroup=_canGroup;
@property(nonatomic) _Bool canCombo; // @synthesize canCombo=_canCombo;
@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(retain, nonatomic) NSNumber *balance; // @synthesize balance=_balance;
@property(copy, nonatomic) NSString *availabelHint; // @synthesize availabelHint=_availabelHint;
@property(copy, nonatomic) NSArray *labelURLList; // @synthesize labelURLList=_labelURLList;
@property(copy, nonatomic) NSArray *imageURLList; // @synthesize imageURLList=_imageURLList;
@property(copy, nonatomic) NSArray *subtitleIconList; // @synthesize subtitleIconList=_subtitleIconList;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *giftID; // @synthesize giftID=_giftID;
- (void).cxx_destruct;
- (id)groupSelectionKey;
- (id)expireTime;
- (id)describe;
- (_Bool)isMyAssetGift;
- (_Bool)isMissionGift;
- (_Bool)isPortalGift;
- (_Bool)isFreeGift;
- (_Bool)isStickerGift;
- (_Bool)isBigGift;
- (_Bool)isPopularGift;
- (_Bool)isNormalGift;
- (id)giftItemModelId;
- (void)updateBalance:(id)arg1;
- (void)didSendedItem;
- (void)didConsumeItem;
- (void)selectedItemChanged;
- (void)selectFailed;
- (void)deselect;
- (void)select;
- (_Bool)canSelect;
- (_Bool)isSameLiveGiftItem:(id)arg1;
- (id)initWithDomainModel:(id)arg1;

@end
