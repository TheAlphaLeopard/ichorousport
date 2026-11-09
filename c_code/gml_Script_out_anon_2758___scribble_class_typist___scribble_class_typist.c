// gml_Script_out_anon_2758___scribble_class_typist___scribble_class_typist @ 0x140163000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_out_anon_2758___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  uint local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_a0 = "gml_Script_reset@anon@1614@__scribble_class_typist@__scribble_class_typist";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x40;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x42;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x43;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07c08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x44;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07728);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x46;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a076d8);
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_80);
  FUN_140e609c0(param_1);
  uVar7 = local_80;
  if ((local_74 & 0xffffff) != 0) {
    uVar7 = FUN_140e4b060(&local_80);
  }
  uStack_bc = 0;
  local_c8 = uVar7 ^ 0x8000000000000000;
  if (&local_c8 != puVar1) {
    local_c8._4_4_ = (undefined4)(local_c8 >> 0x20);
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = 0;
    local_b8 = (int)uVar7;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x48;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04e58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_98 = 0x49;
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_90 = 0;
  local_88 = 0;
  local_84 = 5;
  puVar2 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a077f8);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ad8);
  local_b8 = _DAT_1419e1e70;
  uStack_b4 = uRam00000001419e1e74;
  uStack_b0 = uRam00000001419e1e78;
  uStack_ac = uRam00000001419e1e7c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_50 = local_70;
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    local_c8 = *puVar2;
  }
  else {
    local_c8 = FUN_140e4b060(puVar2);
  }
  local_b8 = (undefined4)local_c8;
  uStack_b4 = (uint)(local_c8 >> 0x20) ^ 0x80000000;
  local_c8 = local_c8 ^ 0x8000000000000000;
  uStack_bc = 0;
  uStack_b0 = uStack_c0;
  uStack_ac = 0;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
  local_48 = local_60;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_90,2,CONCAT44(uVar8,DAT_1419fd218),&local_50);
  if (puVar4 != puVar3) {
    local_b8 = *puVar4;
    uStack_b4 = puVar4[1];
    uStack_b0 = puVar4[2];
    uStack_ac = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  FUN_140e60910(1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05ad8);
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)FUN_140e48e40(puVar1,0);
  FUN_140e609c0(*(undefined8 *)*puVar1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  FUN_140e60910(2);
  local_98 = 0x4a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03d88);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x4b;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07768);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x4c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07bd8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_98 = 0x4d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07ba8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_98 = 0x4e;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a078a8);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e8da20(&local_90,param_1,0);
  if (puVar4 != puVar3) {
    local_b8 = *puVar4;
    uStack_b4 = puVar4[1];
    uStack_b0 = puVar4[2];
    uStack_ac = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  FUN_140e60910(1);
  local_98 = 0x4f;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b48);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x50;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a98);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_98 = 0x52;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar6 = FUN_140e5c910();
  FUN_140e42c10(uVar6,param_1);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

