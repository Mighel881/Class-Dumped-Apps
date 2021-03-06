//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDownloadingIcon.h"

#import "SBCalendarIconImageProviderDelegate.h"

@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate>
{
    SBCalendarIconImageProvider *_imageProvider;
}

+ (_Bool)canGenerateIconsInBackground;
@property(readonly, nonatomic) SBCalendarIconImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (void)calendarIconImageProviderHasChanged:(id)arg1;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(CDUnknownBlockType)arg2;
- (void)localeChanged;
- (id)initWithApplicationPlaceholder:(id)arg1;

@end

