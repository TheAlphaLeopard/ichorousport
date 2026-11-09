// gml_Script_flush_anon_42972___scribble_class_element___scribble_class_element @ 0x14012de60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * gml_Script_flush_anon_42972___scribble_class_element___scribble_class_element
                 (longlong *param_1,undefined8 param_2,uint *param_3,int param_4,undefined8 *param_5
                 )

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  ulonglong local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Script_build@anon@42161@__scribble_class_element@__scribble_class_element";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x554;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddce10) {
    _Init_thread_header(&DAT_141ddce10);
    if (DAT_141ddce10 == -1) {
      DAT_141ddce30 = (longlong *)FUN_140e63aa0(DAT_141a04fd8);
      _Init_thread_footer(&DAT_141ddce10);
    }
  }
  if (DAT_141ddc079 == '\0') {
    FUN_140e64380(DAT_141ddce30,
                  "gml_Script_build@anon@42161@__scribble_class_element@__scribble_class_element");
    FUN_140e64380(param_1,
                  "gml_Script_build@anon@42161@__scribble_class_element@__scribble_class_element");
  }
  local_58 = 0x560;
  if (DAT_141ddc079 == '\0') {
    DAT_141ddc079 = '\x01';
    puVar1 = (uint *)(**(code **)(*DAT_141ddce30 + 0x10))(DAT_141ddce30,DAT_141a05f68);
    local_78 = DAT_141a059c8 & 0xffffff;
    uStack_74 = (int)(DAT_141a059c8 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_74 == 0xf) {
      uStack_74 = 0x4000004;
    }
    else {
      uStack_74 = uStack_74 | 0x1000000;
    }
    uStack_7c = 0xf;
    local_88 = CONCAT44(uStack_74,DAT_141a059c8) & 0xffffffff00ffffff;
    uStack_70 = uStack_80;
    uStack_6c = 0xf;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_78);
    local_90 = local_40;
    FUN_140e609c0(DAT_141ddce30);
    puVar2 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar4,DAT_1419fd6d8),
                                   &local_90);
    if (puVar2 != puVar1) {
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_78);
    }
    FUN_140e60910(1);
  }
  local_58 = 0x556;
  puVar1 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05c38);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    puVar2 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar2 = (uint *)*param_5;
  }
  if (puVar2 != puVar1) {
    local_78 = *puVar2;
    uStack_74 = puVar2[1];
    uStack_70 = puVar2[2];
    uStack_6c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x558;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05ac8);
  local_78 = _DAT_1419df7c0;
  uStack_74 = uRam00000001419df7c4;
  uStack_70 = uRam00000001419df7c8;
  uStack_6c = uRam00000001419df7cc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_98 = local_50;
  FUN_140e63610(param_1,param_2,&local_a8,1,uVar3,&local_98);
  local_58 = 0x561;
  puVar1 = (uint *)(**(code **)(*DAT_141ddce30 + 8))(DAT_141ddce30,DAT_141a05f68);
  if (puVar1 != param_3) {
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

