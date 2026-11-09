// gml_Script_anon_5064____struct___129_JUKEBOX_system @ 0x140396af0

undefined8 *
gml_Script_anon_5064____struct___129_JUKEBOX_system
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2320@___struct___129@JUKEBOX_system";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 100;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde9d8) {
    _Init_thread_header(&DAT_141dde9d8);
    if (DAT_141dde9d8 == -1) {
      DAT_141dde9e0 = FUN_140e63aa0(DAT_1419f4b48);
      _Init_thread_footer(&DAT_141dde9d8);
    }
  }
  FUN_140e643a0(param_1,DAT_141dde9e0);
  local_38 = 0x65;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f49f8);
  FUN_140e609c0(param_1);
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_60 = *(undefined4 *)(puVar2 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x66;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ae8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_38 = 0x67;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a064f8);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  if (puVar3 != puVar1) {
    local_68 = *puVar3;
    uStack_60 = *(undefined4 *)(puVar3 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x68;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4c58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x69;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_38 = 0x6a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b78);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar3) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  local_38 = 0x6b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4c28);
  uStack_5c = 0xd;
  local_68 = 0x3ff0000000000000;
  if (&local_68 != puVar3) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  local_38 = 0x6c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4928);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_38 = 0x6e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4b58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_2762_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x6f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_2819_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x70;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f49a8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_2876_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x71;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4ce8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_2933_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x72;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4968);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_2982_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x73;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4a88);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_3366_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x75;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4a98);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_3566_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x80;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4db8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,
                gml_Script____struct___133_anon_3694_anon_2320____struct___129_JUKEBOX_system,
                param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x86;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a18);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_3928_anon_3694_anon_2320____struct___129_JUKEBOX_system,
                param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x8b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a580f0);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_4438_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0x9a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4d18);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_4603_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xa0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4cb8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_4727_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xa6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef268);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_2320____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xac;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4e38);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_68,gml_Script_anon_4909____struct___129_JUKEBOX_system,param_1);
  if (&local_68 != puVar3) {
    local_58 = (undefined4)local_68;
    uStack_54 = local_68._4_4_;
    uStack_50 = uStack_60;
    uStack_4c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

