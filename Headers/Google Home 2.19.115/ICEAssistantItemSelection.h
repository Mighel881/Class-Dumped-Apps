//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEAssistantComponent.h"

@class ICEComponent;

@interface ICEAssistantItemSelection : ICEAssistantComponent
{
    _Bool _hideUnselectedItems;
    _Bool _itemsSelected;
    ICEComponent *_content;
    long long _animationDuration;
}

+ (_Bool)supportsSecureCoding;
+ (Class)mutableSubclass;
@property(nonatomic) _Bool itemsSelected; // @synthesize itemsSelected=_itemsSelected;
@property(nonatomic) _Bool hideUnselectedItems; // @synthesize hideUnselectedItems=_hideUnselectedItems;
@property(nonatomic) long long animationDuration; // @synthesize animationDuration=_animationDuration;
@property(copy, nonatomic) ICEComponent *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;

@end

