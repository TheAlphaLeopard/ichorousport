// gml_Script_anon_1167_gml_Object_oGiveOffering_Create_0 @ 0x140af7630

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_1167_gml_Object_oGiveOffering_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  
  local_60 = "gml_Object_oGiveOffering_Create_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_58 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_58 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3398);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_58 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f33a8);
  uStack_7c = 0xd;
  local_88 = 0;
  if (&local_88 != puVar1) {
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = uStack_80;
    uStack_6c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  local_58 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05568);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_58 = 6;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  FUN_140e634e0(param_1,param_2,&local_a8,0,CONCAT44(uVar4,DAT_141a02818),0);
  local_58 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f33d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3ff0000000000000;
  local_58 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eebf8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_58 = 10;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a46588);
  local_78 = _DAT_141dd93e8;
  uStack_74 = uRam0000000141dd93ec;
  uStack_70 = uRam0000000141dd93f0;
  uStack_6c = DAT_141dd93f4;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_98 = local_50;
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_90 = local_40;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)gml_Script_seg_add(param_1,param_2,&local_a8,2,&local_98);
  if (puVar3 != puVar2) {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0xb;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3358);
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_98 = local_50;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)
           gml_Script_scribble_typists_add_event(param_1,param_2,&local_a8,1,&local_98);
  if (puVar3 != puVar2) {
    local_78 = *puVar3;
    uStack_74 = puVar3[1];
    uStack_70 = puVar3[2];
    uStack_6c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_58 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2b28);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x403e000000000000;
  local_58 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f33b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_58 = 0x11;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f33c8);
  FUN_140e609c0(param_1);
  uStack_7c = 0xf;
  local_88 = 0x10000030000001f;
  if (&local_88 != puVar1) {
    local_78 = 0x1f;
    uStack_74 = 0x1000003;
    uStack_70 = uStack_80;
    uStack_6c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_58 = 0x13;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  local_78 = _DAT_1419eb810;
  uStack_74 = uRam00000001419eb814;
  uStack_70 = uRam00000001419eb818;
  uStack_6c = uRam00000001419eb81c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_78);
  local_98 = local_50;
  local_78 = _DAT_1419eb800;
  uStack_74 = uRam00000001419eb804;
  uStack_70 = uRam00000001419eb808;
  uStack_6c = uRam00000001419eb80c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_78);
  local_90 = local_40;
  gml_Script_scribble_anim_wave(param_1,param_2,&local_a8,2,&local_98);
  local_58 = 0x14;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  gml_Script_jb_stack_get(param_1,param_2,&local_a8,0,0);
  local_58 = 0x17;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3368);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Object_oGiveOffering_Draw_64,param_1);
  if (&local_88 != puVar1) {
    local_78 = (undefined4)local_88;
    uStack_74 = local_88._4_4_;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_58 = 0x39;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ef958);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Script_anon_606_gml_Object_oGiveOffering_Draw_64,param_1);
  if (&local_88 != puVar1) {
    local_78 = (undefined4)local_88;
    uStack_74 = local_88._4_4_;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}

