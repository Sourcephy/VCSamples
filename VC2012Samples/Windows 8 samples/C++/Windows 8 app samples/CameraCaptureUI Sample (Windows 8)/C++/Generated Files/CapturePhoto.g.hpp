﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "CapturePhoto.xaml.h"

void ::SDKSample::CameraCapture::CapturePhoto::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///CapturePhoto.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::SDKSample::CameraCapture::CapturePhoto::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 1:
        {
            this->LayoutRoot = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 2:
        {
            this->Input = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 3:
        {
            this->Output = safe_cast<::Windows::UI::Xaml::Controls::Grid^>(__target);
        }
        break;
    case 4:
        {
            this->MyCapturedPhoto = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
        }
        break;
    case 5:
        {
            this->CapturePhotoButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->CapturePhotoButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::SDKSample::CameraCapture::CapturePhoto::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&CapturePhoto::CapturePhoto_Click);
        }
        break;
    case 6:
        {
            this->ResetButton = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
            (safe_cast<::Windows::UI::Xaml::Controls::Button^>(this->ResetButton))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::SDKSample::CameraCapture::CapturePhoto::*)
                (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&CapturePhoto::Reset_Click);
        }
        break;
    case 7:
        {
            this->FullScreenLandscape = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
        }
        break;
    case 8:
        {
            this->Filled = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
        }
        break;
    case 9:
        {
            this->FullScreenPortrait = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
        }
        break;
    case 10:
        {
            this->Snapped = safe_cast<::Windows::UI::Xaml::VisualState^>(__target);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::SDKSample::CameraCapture::CapturePhoto::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)

