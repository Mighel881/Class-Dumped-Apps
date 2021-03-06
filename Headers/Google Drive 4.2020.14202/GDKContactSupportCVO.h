//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentViewObject.h>

@class NSString;
@protocol GDKContactSupportCVDelegate, GDKStorageColorScheming;

@interface GDKContactSupportCVO : GOOBaseContentViewObject
{
    NSString *_headerTitle;
    NSString *_subtitle;
    id <GDKContactSupportCVDelegate> _delegate;
    id <GDKStorageColorScheming> _colorScheme;
}

@property(retain, nonatomic) id <GDKStorageColorScheming> colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) __weak id <GDKContactSupportCVDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (void).cxx_destruct;
- (Class)contentViewClass;
- (id)initWithHeaderTitle:(id)arg1 subtitle:(id)arg2 colorScheme:(id)arg3 delegate:(id)arg4;

@end

