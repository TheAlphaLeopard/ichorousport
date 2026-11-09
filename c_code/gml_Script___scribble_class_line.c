// gml_Script___scribble_class_line @ 0x140148b30

undefined8 *
gml_Script___scribble_class_line(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
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
  
  local_40 = "gml_Script___scribble_class_generator_state";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 3;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddcf28) {
    _Init_thread_header(&DAT_141ddcf28);
    if (DAT_141ddcf28 == -1) {
      DAT_141ddcf20 = (longlong *)FUN_140e63aa0(DAT_141a06768);
      _Init_thread_footer(&DAT_141ddcf28);
    }
  }
  if (DAT_141ddc080 == '\0') {
    FUN_140e64380(DAT_141ddcf20,"gml_Script___scribble_class_generator_state");
    FUN_140e64380(param_1,"gml_Script___scribble_class_generator_state");
  }
  FUN_140e643a0(param_1,DAT_141ddcf20);
  local_38 = 0x10;
  if (DAT_141ddc080 == '\0') {
    DAT_141ddc080 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141ddcf20 + 0x10))(DAT_141ddcf20,DAT_141a067d8);
    FUN_140e609c0(DAT_141ddcf20);
    FUN_140e645a0(&local_68,gml_GlobalScript___scribble_class_line,0);
    if (&local_68 != puVar2) {
      local_58 = (undefined4)local_68;
      uStack_54 = local_68._4_4_;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_58);
    }
    if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140e60910(1);
  }
  local_38 = 5;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066a8);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,0x14);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 6;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06858);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,2);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 7;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06898);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,6);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 8;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06698);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,10);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 9;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06738);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,3);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 10;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06808);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,6);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xb;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a067f8);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,0x14);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xc;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06798);
  FUN_140e609c0(param_1);
  uStack_5c = 0;
  local_68 = 0x408f400000000000;
  uVar1 = FUN_140e4a740(&local_68);
  puVar4 = (undefined4 *)FUN_140ea89f0(&local_78,uVar1,4);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e60910(1);
  local_38 = 0xe;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  uVar5 = (**(code **)(*DAT_141ddcf20 + 8))(DAT_141ddcf20,DAT_141a067d8);
  FUN_140e63610(param_1,param_2,&local_78,0,uVar5,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

