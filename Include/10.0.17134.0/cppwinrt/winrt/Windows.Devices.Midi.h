// C++/WinRT v1.0.180227.3

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#include "winrt/base.h"

WINRT_WARNING_PUSH
#include "winrt/Windows.Foundation.h"
#include "winrt/Windows.Foundation.Collections.h"
#include "winrt/impl/Windows.Devices.Enumeration.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Devices.Midi.2.h"
#include "winrt/Windows.Devices.h"

namespace winrt::impl {

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiChannelPressureMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiChannelPressureMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiChannelPressureMessage<D>::Pressure() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiChannelPressureMessage)->get_Pressure(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiChannelPressureMessage consume_Windows_Devices_Midi_IMidiChannelPressureMessageFactory<D>::CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure) const
{
    Windows::Devices::Midi::MidiChannelPressureMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiChannelPressureMessageFactory)->CreateMidiChannelPressureMessage(channel, pressure, put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiControlChangeMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiControlChangeMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiControlChangeMessage<D>::Controller() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiControlChangeMessage)->get_Controller(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiControlChangeMessage<D>::ControlValue() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiControlChangeMessage)->get_ControlValue(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiControlChangeMessage consume_Windows_Devices_Midi_IMidiControlChangeMessageFactory<D>::CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) const
{
    Windows::Devices::Midi::MidiControlChangeMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiControlChangeMessageFactory)->CreateMidiControlChangeMessage(channel, controller, controlValue, put_abi(value)));
    return value;
}

template <typename D> event_token consume_Windows_Devices_Midi_IMidiInPort<D>::MessageReceived(Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> const& handler) const
{
    event_token token{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiInPort)->add_MessageReceived(get_abi(handler), put_abi(token)));
    return token;
}

template <typename D> event_revoker<Windows::Devices::Midi::IMidiInPort> consume_Windows_Devices_Midi_IMidiInPort<D>::MessageReceived(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> const& handler) const
{
    return impl::make_event_revoker<D, Windows::Devices::Midi::IMidiInPort>(this, &abi_t<Windows::Devices::Midi::IMidiInPort>::remove_MessageReceived, MessageReceived(handler));
}

template <typename D> void consume_Windows_Devices_Midi_IMidiInPort<D>::MessageReceived(event_token const& token) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiInPort)->remove_MessageReceived(get_abi(token)));
}

template <typename D> hstring consume_Windows_Devices_Midi_IMidiInPort<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiInPort)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> consume_Windows_Devices_Midi_IMidiInPortStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiInPortStatics)->FromIdAsync(get_abi(deviceId), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Midi_IMidiInPortStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiInPortStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::TimeSpan consume_Windows_Devices_Midi_IMidiMessage<D>::Timestamp() const
{
    Windows::Foundation::TimeSpan value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiMessage)->get_Timestamp(put_abi(value)));
    return value;
}

template <typename D> Windows::Storage::Streams::IBuffer consume_Windows_Devices_Midi_IMidiMessage<D>::RawData() const
{
    Windows::Storage::Streams::IBuffer value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiMessage)->get_RawData(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiMessageType consume_Windows_Devices_Midi_IMidiMessage<D>::Type() const
{
    Windows::Devices::Midi::MidiMessageType value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiMessage)->get_Type(put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Midi::IMidiMessage consume_Windows_Devices_Midi_IMidiMessageReceivedEventArgs<D>::Message() const
{
    Windows::Devices::Midi::IMidiMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiMessageReceivedEventArgs)->get_Message(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiNoteOffMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOffMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiNoteOffMessage<D>::Note() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOffMessage)->get_Note(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiNoteOffMessage<D>::Velocity() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOffMessage)->get_Velocity(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiNoteOffMessage consume_Windows_Devices_Midi_IMidiNoteOffMessageFactory<D>::CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) const
{
    Windows::Devices::Midi::MidiNoteOffMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOffMessageFactory)->CreateMidiNoteOffMessage(channel, note, velocity, put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiNoteOnMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOnMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiNoteOnMessage<D>::Note() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOnMessage)->get_Note(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiNoteOnMessage<D>::Velocity() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOnMessage)->get_Velocity(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiNoteOnMessage consume_Windows_Devices_Midi_IMidiNoteOnMessageFactory<D>::CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) const
{
    Windows::Devices::Midi::MidiNoteOnMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiNoteOnMessageFactory)->CreateMidiNoteOnMessage(channel, note, velocity, put_abi(value)));
    return value;
}

template <typename D> void consume_Windows_Devices_Midi_IMidiOutPort<D>::SendMessage(Windows::Devices::Midi::IMidiMessage const& midiMessage) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiOutPort)->SendMessage(get_abi(midiMessage)));
}

template <typename D> void consume_Windows_Devices_Midi_IMidiOutPort<D>::SendBuffer(Windows::Storage::Streams::IBuffer const& midiData) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiOutPort)->SendBuffer(get_abi(midiData)));
}

template <typename D> hstring consume_Windows_Devices_Midi_IMidiOutPort<D>::DeviceId() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiOutPort)->get_DeviceId(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> consume_Windows_Devices_Midi_IMidiOutPortStatics<D>::FromIdAsync(param::hstring const& deviceId) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiOutPortStatics)->FromIdAsync(get_abi(deviceId), put_abi(value)));
    return value;
}

template <typename D> hstring consume_Windows_Devices_Midi_IMidiOutPortStatics<D>::GetDeviceSelector() const
{
    hstring value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiOutPortStatics)->GetDeviceSelector(put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiPitchBendChangeMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPitchBendChangeMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Midi_IMidiPitchBendChangeMessage<D>::Bend() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPitchBendChangeMessage)->get_Bend(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiPitchBendChangeMessage consume_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory<D>::CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) const
{
    Windows::Devices::Midi::MidiPitchBendChangeMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory)->CreateMidiPitchBendChangeMessage(channel, bend, put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage<D>::Note() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage)->get_Note(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage<D>::Pressure() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage)->get_Pressure(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage consume_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory<D>::CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) const
{
    Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory)->CreateMidiPolyphonicKeyPressureMessage(channel, note, pressure, put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiProgramChangeMessage<D>::Channel() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiProgramChangeMessage)->get_Channel(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiProgramChangeMessage<D>::Program() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiProgramChangeMessage)->get_Program(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiProgramChangeMessage consume_Windows_Devices_Midi_IMidiProgramChangeMessageFactory<D>::CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program) const
{
    Windows::Devices::Midi::MidiProgramChangeMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiProgramChangeMessageFactory)->CreateMidiProgramChangeMessage(channel, program, put_abi(value)));
    return value;
}

template <typename D> uint16_t consume_Windows_Devices_Midi_IMidiSongPositionPointerMessage<D>::Beats() const
{
    uint16_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSongPositionPointerMessage)->get_Beats(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiSongPositionPointerMessage consume_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory<D>::CreateMidiSongPositionPointerMessage(uint16_t beats) const
{
    Windows::Devices::Midi::MidiSongPositionPointerMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory)->CreateMidiSongPositionPointerMessage(beats, put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiSongSelectMessage<D>::Song() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSongSelectMessage)->get_Song(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiSongSelectMessage consume_Windows_Devices_Midi_IMidiSongSelectMessageFactory<D>::CreateMidiSongSelectMessage(uint8_t song) const
{
    Windows::Devices::Midi::MidiSongSelectMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSongSelectMessageFactory)->CreateMidiSongSelectMessage(song, put_abi(value)));
    return value;
}

template <typename D> Windows::Devices::Enumeration::DeviceInformation consume_Windows_Devices_Midi_IMidiSynthesizer<D>::AudioDevice() const
{
    Windows::Devices::Enumeration::DeviceInformation value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSynthesizer)->get_AudioDevice(put_abi(value)));
    return value;
}

template <typename D> double consume_Windows_Devices_Midi_IMidiSynthesizer<D>::Volume() const
{
    double value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSynthesizer)->get_Volume(&value));
    return value;
}

template <typename D> void consume_Windows_Devices_Midi_IMidiSynthesizer<D>::Volume(double value) const
{
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSynthesizer)->put_Volume(value));
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> consume_Windows_Devices_Midi_IMidiSynthesizerStatics<D>::CreateAsync() const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSynthesizerStatics)->CreateAsync(put_abi(value)));
    return value;
}

template <typename D> Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> consume_Windows_Devices_Midi_IMidiSynthesizerStatics<D>::CreateAsync(Windows::Devices::Enumeration::DeviceInformation const& audioDevice) const
{
    Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSynthesizerStatics)->CreateFromAudioDeviceAsync(get_abi(audioDevice), put_abi(value)));
    return value;
}

template <typename D> bool consume_Windows_Devices_Midi_IMidiSynthesizerStatics<D>::IsSynthesizer(Windows::Devices::Enumeration::DeviceInformation const& midiDevice) const
{
    bool value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSynthesizerStatics)->IsSynthesizer(get_abi(midiDevice), &value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiSystemExclusiveMessage consume_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory<D>::CreateMidiSystemExclusiveMessage(Windows::Storage::Streams::IBuffer const& rawData) const
{
    Windows::Devices::Midi::MidiSystemExclusiveMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory)->CreateMidiSystemExclusiveMessage(get_abi(rawData), put_abi(value)));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiTimeCodeMessage<D>::FrameType() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiTimeCodeMessage)->get_FrameType(&value));
    return value;
}

template <typename D> uint8_t consume_Windows_Devices_Midi_IMidiTimeCodeMessage<D>::Values() const
{
    uint8_t value{};
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiTimeCodeMessage)->get_Values(&value));
    return value;
}

template <typename D> Windows::Devices::Midi::MidiTimeCodeMessage consume_Windows_Devices_Midi_IMidiTimeCodeMessageFactory<D>::CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values) const
{
    Windows::Devices::Midi::MidiTimeCodeMessage value{ nullptr };
    check_hresult(WINRT_SHIM(Windows::Devices::Midi::IMidiTimeCodeMessageFactory)->CreateMidiTimeCodeMessage(frameType, values, put_abi(value)));
    return value;
}

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiChannelPressureMessage> : produce_base<D, Windows::Devices::Midi::IMidiChannelPressureMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiChannelPressureMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiChannelPressureMessageFactory>
{
    HRESULT __stdcall CreateMidiChannelPressureMessage(uint8_t channel, uint8_t pressure, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiChannelPressureMessage>(this->shim().CreateMidiChannelPressureMessage(channel, pressure));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiControlChangeMessage> : produce_base<D, Windows::Devices::Midi::IMidiControlChangeMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Controller(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Controller());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_ControlValue(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().ControlValue());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiControlChangeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiControlChangeMessageFactory>
{
    HRESULT __stdcall CreateMidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiControlChangeMessage>(this->shim().CreateMidiControlChangeMessage(channel, controller, controlValue));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiInPort> : produce_base<D, Windows::Devices::Midi::IMidiInPort>
{
    HRESULT __stdcall add_MessageReceived(void* handler, event_token* token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *token = detach_from<event_token>(this->shim().MessageReceived(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Devices::Midi::MidiInPort, Windows::Devices::Midi::MidiMessageReceivedEventArgs> const*>(&handler)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall remove_MessageReceived(event_token token) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MessageReceived(*reinterpret_cast<event_token const*>(&token));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiInPortStatics> : produce_base<D, Windows::Devices::Midi::IMidiInPortStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiMessage> : produce_base<D, Windows::Devices::Midi::IMidiMessage>
{
    HRESULT __stdcall get_Timestamp(Windows::Foundation::TimeSpan* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::TimeSpan>(this->shim().Timestamp());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_RawData(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().RawData());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Type(Windows::Devices::Midi::MidiMessageType* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiMessageType>(this->shim().Type());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiMessageReceivedEventArgs> : produce_base<D, Windows::Devices::Midi::IMidiMessageReceivedEventArgs>
{
    HRESULT __stdcall get_Message(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::IMidiMessage>(this->shim().Message());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOffMessage> : produce_base<D, Windows::Devices::Midi::IMidiNoteOffMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Note(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Note());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Velocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOffMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiNoteOffMessageFactory>
{
    HRESULT __stdcall CreateMidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiNoteOffMessage>(this->shim().CreateMidiNoteOffMessage(channel, note, velocity));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOnMessage> : produce_base<D, Windows::Devices::Midi::IMidiNoteOnMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Note(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Note());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Velocity(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Velocity());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiNoteOnMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiNoteOnMessageFactory>
{
    HRESULT __stdcall CreateMidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiNoteOnMessage>(this->shim().CreateMidiNoteOnMessage(channel, note, velocity));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiOutPort> : produce_base<D, Windows::Devices::Midi::IMidiOutPort>
{
    HRESULT __stdcall SendMessage(void* midiMessage) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendMessage(*reinterpret_cast<Windows::Devices::Midi::IMidiMessage const*>(&midiMessage));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall SendBuffer(void* midiData) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendBuffer(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&midiData));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_DeviceId(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DeviceId());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiOutPortStatics> : produce_base<D, Windows::Devices::Midi::IMidiOutPortStatics>
{
    HRESULT __stdcall FromIdAsync(HSTRING deviceId, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort>>(this->shim().FromIdAsync(*reinterpret_cast<hstring const*>(&deviceId)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall GetDeviceSelector(HSTRING* value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().GetDeviceSelector());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPitchBendChangeMessage> : produce_base<D, Windows::Devices::Midi::IMidiPitchBendChangeMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Bend(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Bend());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>
{
    HRESULT __stdcall CreateMidiPitchBendChangeMessage(uint8_t channel, uint16_t bend, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiPitchBendChangeMessage>(this->shim().CreateMidiPitchBendChangeMessage(channel, bend));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> : produce_base<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Note(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Note());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Pressure(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Pressure());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>
{
    HRESULT __stdcall CreateMidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage>(this->shim().CreateMidiPolyphonicKeyPressureMessage(channel, note, pressure));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiProgramChangeMessage> : produce_base<D, Windows::Devices::Midi::IMidiProgramChangeMessage>
{
    HRESULT __stdcall get_Channel(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Channel());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Program(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Program());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiProgramChangeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiProgramChangeMessageFactory>
{
    HRESULT __stdcall CreateMidiProgramChangeMessage(uint8_t channel, uint8_t program, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiProgramChangeMessage>(this->shim().CreateMidiProgramChangeMessage(channel, program));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongPositionPointerMessage> : produce_base<D, Windows::Devices::Midi::IMidiSongPositionPointerMessage>
{
    HRESULT __stdcall get_Beats(uint16_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().Beats());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>
{
    HRESULT __stdcall CreateMidiSongPositionPointerMessage(uint16_t beats, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiSongPositionPointerMessage>(this->shim().CreateMidiSongPositionPointerMessage(beats));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongSelectMessage> : produce_base<D, Windows::Devices::Midi::IMidiSongSelectMessage>
{
    HRESULT __stdcall get_Song(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Song());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSongSelectMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiSongSelectMessageFactory>
{
    HRESULT __stdcall CreateMidiSongSelectMessage(uint8_t song, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiSongSelectMessage>(this->shim().CreateMidiSongSelectMessage(song));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSynthesizer> : produce_base<D, Windows::Devices::Midi::IMidiSynthesizer>
{
    HRESULT __stdcall get_AudioDevice(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Enumeration::DeviceInformation>(this->shim().AudioDevice());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Volume(double* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().Volume());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall put_Volume(double value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Volume(value);
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSynthesizerStatics> : produce_base<D, Windows::Devices::Midi::IMidiSynthesizerStatics>
{
    HRESULT __stdcall CreateAsync(void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer>>(this->shim().CreateAsync());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall CreateFromAudioDeviceAsync(void* audioDevice, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer>>(this->shim().CreateAsync(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&audioDevice)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall IsSynthesizer(void* midiDevice, bool* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSynthesizer(*reinterpret_cast<Windows::Devices::Enumeration::DeviceInformation const*>(&midiDevice)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>
{
    HRESULT __stdcall CreateMidiSystemExclusiveMessage(void* rawData, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiSystemExclusiveMessage>(this->shim().CreateMidiSystemExclusiveMessage(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&rawData)));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiTimeCodeMessage> : produce_base<D, Windows::Devices::Midi::IMidiTimeCodeMessage>
{
    HRESULT __stdcall get_FrameType(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().FrameType());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }

    HRESULT __stdcall get_Values(uint8_t* value) noexcept final
    {
        try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint8_t>(this->shim().Values());
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

template <typename D>
struct produce<D, Windows::Devices::Midi::IMidiTimeCodeMessageFactory> : produce_base<D, Windows::Devices::Midi::IMidiTimeCodeMessageFactory>
{
    HRESULT __stdcall CreateMidiTimeCodeMessage(uint8_t frameType, uint8_t values, void** value) noexcept final
    {
        try
        {
            *value = nullptr;
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Devices::Midi::MidiTimeCodeMessage>(this->shim().CreateMidiTimeCodeMessage(frameType, values));
            return S_OK;
        }
        catch (...)
        {
            return to_hresult();
        }
    }
};

}

WINRT_EXPORT namespace winrt::Windows::Devices::Midi {

inline MidiActiveSensingMessage::MidiActiveSensingMessage() :
    MidiActiveSensingMessage(get_activation_factory<MidiActiveSensingMessage>().ActivateInstance<MidiActiveSensingMessage>())
{}

inline MidiChannelPressureMessage::MidiChannelPressureMessage(uint8_t channel, uint8_t pressure) :
    MidiChannelPressureMessage(get_activation_factory<MidiChannelPressureMessage, Windows::Devices::Midi::IMidiChannelPressureMessageFactory>().CreateMidiChannelPressureMessage(channel, pressure))
{}

inline MidiContinueMessage::MidiContinueMessage() :
    MidiContinueMessage(get_activation_factory<MidiContinueMessage>().ActivateInstance<MidiContinueMessage>())
{}

inline MidiControlChangeMessage::MidiControlChangeMessage(uint8_t channel, uint8_t controller, uint8_t controlValue) :
    MidiControlChangeMessage(get_activation_factory<MidiControlChangeMessage, Windows::Devices::Midi::IMidiControlChangeMessageFactory>().CreateMidiControlChangeMessage(channel, controller, controlValue))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiInPort> MidiInPort::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<MidiInPort, Windows::Devices::Midi::IMidiInPortStatics>().FromIdAsync(deviceId);
}

inline hstring MidiInPort::GetDeviceSelector()
{
    return get_activation_factory<MidiInPort, Windows::Devices::Midi::IMidiInPortStatics>().GetDeviceSelector();
}

inline MidiNoteOffMessage::MidiNoteOffMessage(uint8_t channel, uint8_t note, uint8_t velocity) :
    MidiNoteOffMessage(get_activation_factory<MidiNoteOffMessage, Windows::Devices::Midi::IMidiNoteOffMessageFactory>().CreateMidiNoteOffMessage(channel, note, velocity))
{}

inline MidiNoteOnMessage::MidiNoteOnMessage(uint8_t channel, uint8_t note, uint8_t velocity) :
    MidiNoteOnMessage(get_activation_factory<MidiNoteOnMessage, Windows::Devices::Midi::IMidiNoteOnMessageFactory>().CreateMidiNoteOnMessage(channel, note, velocity))
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::IMidiOutPort> MidiOutPort::FromIdAsync(param::hstring const& deviceId)
{
    return get_activation_factory<MidiOutPort, Windows::Devices::Midi::IMidiOutPortStatics>().FromIdAsync(deviceId);
}

inline hstring MidiOutPort::GetDeviceSelector()
{
    return get_activation_factory<MidiOutPort, Windows::Devices::Midi::IMidiOutPortStatics>().GetDeviceSelector();
}

inline MidiPitchBendChangeMessage::MidiPitchBendChangeMessage(uint8_t channel, uint16_t bend) :
    MidiPitchBendChangeMessage(get_activation_factory<MidiPitchBendChangeMessage, Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory>().CreateMidiPitchBendChangeMessage(channel, bend))
{}

inline MidiPolyphonicKeyPressureMessage::MidiPolyphonicKeyPressureMessage(uint8_t channel, uint8_t note, uint8_t pressure) :
    MidiPolyphonicKeyPressureMessage(get_activation_factory<MidiPolyphonicKeyPressureMessage, Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory>().CreateMidiPolyphonicKeyPressureMessage(channel, note, pressure))
{}

inline MidiProgramChangeMessage::MidiProgramChangeMessage(uint8_t channel, uint8_t program) :
    MidiProgramChangeMessage(get_activation_factory<MidiProgramChangeMessage, Windows::Devices::Midi::IMidiProgramChangeMessageFactory>().CreateMidiProgramChangeMessage(channel, program))
{}

inline MidiSongPositionPointerMessage::MidiSongPositionPointerMessage(uint16_t beats) :
    MidiSongPositionPointerMessage(get_activation_factory<MidiSongPositionPointerMessage, Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory>().CreateMidiSongPositionPointerMessage(beats))
{}

inline MidiSongSelectMessage::MidiSongSelectMessage(uint8_t song) :
    MidiSongSelectMessage(get_activation_factory<MidiSongSelectMessage, Windows::Devices::Midi::IMidiSongSelectMessageFactory>().CreateMidiSongSelectMessage(song))
{}

inline MidiStartMessage::MidiStartMessage() :
    MidiStartMessage(get_activation_factory<MidiStartMessage>().ActivateInstance<MidiStartMessage>())
{}

inline MidiStopMessage::MidiStopMessage() :
    MidiStopMessage(get_activation_factory<MidiStopMessage>().ActivateInstance<MidiStopMessage>())
{}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> MidiSynthesizer::CreateAsync()
{
    return get_activation_factory<MidiSynthesizer, Windows::Devices::Midi::IMidiSynthesizerStatics>().CreateAsync();
}

inline Windows::Foundation::IAsyncOperation<Windows::Devices::Midi::MidiSynthesizer> MidiSynthesizer::CreateAsync(Windows::Devices::Enumeration::DeviceInformation const& audioDevice)
{
    return get_activation_factory<MidiSynthesizer, Windows::Devices::Midi::IMidiSynthesizerStatics>().CreateAsync(audioDevice);
}

inline bool MidiSynthesizer::IsSynthesizer(Windows::Devices::Enumeration::DeviceInformation const& midiDevice)
{
    return get_activation_factory<MidiSynthesizer, Windows::Devices::Midi::IMidiSynthesizerStatics>().IsSynthesizer(midiDevice);
}

inline MidiSystemExclusiveMessage::MidiSystemExclusiveMessage(Windows::Storage::Streams::IBuffer const& rawData) :
    MidiSystemExclusiveMessage(get_activation_factory<MidiSystemExclusiveMessage, Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory>().CreateMidiSystemExclusiveMessage(rawData))
{}

inline MidiSystemResetMessage::MidiSystemResetMessage() :
    MidiSystemResetMessage(get_activation_factory<MidiSystemResetMessage>().ActivateInstance<MidiSystemResetMessage>())
{}

inline MidiTimeCodeMessage::MidiTimeCodeMessage(uint8_t frameType, uint8_t values) :
    MidiTimeCodeMessage(get_activation_factory<MidiTimeCodeMessage, Windows::Devices::Midi::IMidiTimeCodeMessageFactory>().CreateMidiTimeCodeMessage(frameType, values))
{}

inline MidiTimingClockMessage::MidiTimingClockMessage() :
    MidiTimingClockMessage(get_activation_factory<MidiTimingClockMessage>().ActivateInstance<MidiTimingClockMessage>())
{}

inline MidiTuneRequestMessage::MidiTuneRequestMessage() :
    MidiTuneRequestMessage(get_activation_factory<MidiTuneRequestMessage>().ActivateInstance<MidiTuneRequestMessage>())
{}

}

WINRT_EXPORT namespace std {

template<> struct hash<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiChannelPressureMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiChannelPressureMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiControlChangeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiControlChangeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiControlChangeMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiInPort> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiInPort> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiInPortStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiInPortStatics> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiMessageReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiNoteOffMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiNoteOffMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiNoteOffMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiNoteOnMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiNoteOnMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiNoteOnMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiOutPort> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiOutPort> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiOutPortStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiOutPortStatics> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiProgramChangeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiProgramChangeMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSongSelectMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSongSelectMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSongSelectMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSynthesizer> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSynthesizer> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSynthesizerStatics> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiTimeCodeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::IMidiTimeCodeMessageFactory> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiActiveSensingMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiActiveSensingMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiChannelPressureMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiChannelPressureMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiContinueMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiContinueMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiControlChangeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiControlChangeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiInPort> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiInPort> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiMessageReceivedEventArgs> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiNoteOffMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiNoteOffMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiNoteOnMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiNoteOnMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiOutPort> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiOutPort> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiPitchBendChangeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiPolyphonicKeyPressureMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiProgramChangeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiProgramChangeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiSongPositionPointerMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiSongSelectMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiSongSelectMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiStartMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiStartMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiStopMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiStopMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiSynthesizer> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiSynthesizer> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiSystemExclusiveMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiSystemResetMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiSystemResetMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiTimeCodeMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiTimeCodeMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiTimingClockMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiTimingClockMessage> {};
template<> struct hash<winrt::Windows::Devices::Midi::MidiTuneRequestMessage> : winrt::impl::hash_base<winrt::Windows::Devices::Midi::MidiTuneRequestMessage> {};

}

WINRT_WARNING_POP
