// gml_Script_anon_15_gml_Object_oEffectFlurry_Create_0 @ 0x1409231d0

void gml_Script_anon_15_gml_Object_oEffectFlurry_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  
  local_d0 = "gml_Object_oEffectFlurry_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_c8 = 1;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efc48);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_128,gml_Object_oEffectSlash_Create_0,0);
  if (&local_128 != puVar2) {
    local_138 = (undefined4)local_128;
    uStack_134 = local_128._4_4_;
    uStack_130 = uStack_120;
    uStack_12c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_c8 = 0x17;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efc48);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419efc38);
  if (puVar3 != local_b8) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_138);
  }
  local_58 = local_b8;
  uStack_11c = 0xf;
  local_128 = 0x100000100000136;
  local_138 = 0x136;
  uStack_134 = 0x1000001;
  uStack_130 = uStack_120;
  uStack_12c = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_138);
  local_50 = local_a8;
  if (puVar3 != local_98) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_138);
  }
  local_48 = local_98;
  uStack_11c = 0xf;
  local_128 = 0x100000100000137;
  local_138 = 0x137;
  uStack_134 = 0x1000001;
  uStack_130 = uStack_120;
  uStack_12c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_138);
  local_40 = local_88;
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar6,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != local_78) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_138);
  }
  local_38 = local_78;
  uVar6 = CONCAT44(uVar7,DAT_1419fd6d8);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_48);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != local_68) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_138);
  }
  local_30 = local_68;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar7,DAT_1419fdca8),&local_38);
  if (puVar3 != puVar4) {
    local_138 = *puVar3;
    uStack_134 = puVar3[1];
    uStack_130 = puVar3[2];
    uStack_12c = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_138);
  }
  FUN_140e60910(1);
  local_c8 = 0x18;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419efc38);
  local_128 = 0x3ff0000000000000;
  uStack_11c = 0xd;
  local_138 = 0;
  uStack_134 = 0x3ff00000;
  uStack_130 = uStack_120;
  uStack_12c = 0xd;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_138);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87930(plVar5,DAT_141a58110,0x80000000,&local_e8);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

