// gml_Script___InputTriggerEffectReapply @ 0x1400de1b0

undefined8 *
gml_Script___InputTriggerEffectReapply
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined1 *local_res8;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script___InputTriggerEffectPlayer";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc8c0) {
    _Init_thread_header(&DAT_141ddc8c0);
    if (DAT_141ddc8c0 == -1) {
      DAT_141ddc8c8 = (longlong *)FUN_140e63aa0(DAT_141a03dd8);
      _Init_thread_footer(&DAT_141ddc8c0);
    }
  }
  if (DAT_141ddc065 == '\0') {
    FUN_140e64380(DAT_141ddc8c8,"gml_Script___InputTriggerEffectPlayer");
    FUN_140e64380(param_1,"gml_Script___InputTriggerEffectPlayer");
  }
  FUN_140e643a0(param_1,DAT_141ddc8c8);
  local_48 = 7;
  if (DAT_141ddc065 == '\0') {
    DAT_141ddc065 = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc8c8 + 0x10))(DAT_141ddc8c8,DAT_1419febe8);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar5 = 0;
    uVar2 = gml_Script___InputVerbGroupsConfig(param_1,param_2,&local_a8,0,0);
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419febc8,0x80000000,&local_88,uVar5,
                  in_stack_ffffffffffffff50 & 0xffffffffffffff00);
    uVar6 = (undefined4)(uVar5 >> 0x20);
    FUN_140e609c0(DAT_141ddc8c8);
    if (&local_88 != puVar1) {
      local_78 = local_88;
      uStack_70 = uStack_80;
      uStack_6c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_78);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc8c8 + 0x10))(DAT_141ddc8c8,DAT_141a03df8);
    FUN_140e609c0(DAT_141ddc8c8);
    FUN_140e645a0(&local_78,gml_Script___InputTriggerEffectPlayer,0);
    if (&local_78 != puVar1) {
      local_68 = (uint)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddc8c8 + 0x10))(DAT_141ddc8c8,DAT_141a03dc8);
    FUN_140e609c0(DAT_141ddc8c8);
    FUN_140e645a0(&local_78,gml_GlobalScript___InputTriggerEffectReapply,0);
    if (&local_78 != puVar1) {
      local_68 = (uint)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_68);
    }
    if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140e60910(1);
  }
  local_48 = 9;
  puVar3 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd7f8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar4 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar4 = (uint *)*param_5;
  }
  if (puVar4 != puVar3) {
    local_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d88);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03db8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_48 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03de8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d98);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar1) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  local_48 = 0xf;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03e08);
  local_68 = DAT_141a03618 & 0xffffff;
  uStack_64 = (int)(DAT_141a03618 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_64 == 0xf) {
    uStack_64 = 0x4000004;
  }
  else {
    uStack_64 = uStack_64 | 0x1000000;
  }
  uStack_6c = 0xf;
  local_78 = CONCAT44(uStack_64,DAT_141a03618) & 0xffffffff00ffffff;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_68);
  local_res8 = local_98;
  FUN_140e609c0(param_1);
  uVar2 = CONCAT44(uVar6,DAT_1419fd6d8);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,1,uVar2,&local_res8);
  uVar6 = (undefined4)((ulonglong)uVar2 >> 0x20);
  if (puVar4 != puVar3) {
    local_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x10;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d78);
  local_68 = DAT_141a03618 & 0xffffff;
  uStack_64 = (int)(DAT_141a03618 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_64 == 0xf) {
    uStack_64 = 0x4000004;
  }
  else {
    uStack_64 = uStack_64 | 0x1000000;
  }
  uStack_6c = 0xf;
  local_78 = CONCAT44(uStack_64,DAT_141a03618) & 0xffffffff00ffffff;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_68);
  local_res8 = local_98;
  FUN_140e609c0(param_1);
  puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar6,DAT_1419fd6d8),
                                 &local_res8);
  if (puVar4 != puVar3) {
    local_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

