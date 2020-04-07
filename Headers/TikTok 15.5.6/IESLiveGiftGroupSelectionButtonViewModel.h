//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveGiftGroupItem, NSString, RACCommand, UIImage;

@interface IESLiveGiftGroupSelectionButtonViewModel : NSObject
{
    _Bool _showBorderLayer;
    _Bool _enableEffect;
    _Bool _selected;
    NSString *_count;
    NSString *_desc;
    UIImage *_effectImage;
    RACCommand *_selectCommand;
    IESLiveGiftGroupItem *_groupItem;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool enableEffect; // @synthesize enableEffect=_enableEffect;
@property(readonly, nonatomic) IESLiveGiftGroupItem *groupItem; // @synthesize groupItem=_groupItem;
@property(nonatomic) _Bool showBorderLayer; // @synthesize showBorderLayer=_showBorderLayer;
@property(readonly, nonatomic) RACCommand *selectCommand; // @synthesize selectCommand=_selectCommand;
@property(retain, nonatomic) UIImage *effectImage; // @synthesize effectImage=_effectImage;
@property(readonly, copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, copy, nonatomic) NSString *count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)initWithGroupItem:(id)arg1;

@end
