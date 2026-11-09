// gml_Object_oFirework_Step_0 @ 0x140ad3710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFirework_Step_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  double local_38;
  undefined4 local_2c;
  
  local_90 = "gml_Object_oFilthyGlare_Draw_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  bVar5 = 0xff;
  local_2c = 0xffffff;
  local_38 = 0.0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_88 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_e8) {
    local_118 = *puVar3;
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  local_58 = &local_e8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar6,DAT_141a02ef8),&local_58);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_88 = 2;
  }
  else {
    local_88 = 4;
    FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_a8);
    uStack_fc = local_9c;
    uStack_100 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_108 = local_a8;
    }
    else {
      FUN_1400419b0(&local_108,&local_a8);
    }
    uStack_10c = 0;
    local_118 = 0x3f80624dd2f1a9fc;
    FUN_140042560(&local_108,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((uStack_fc & 0xffffff) == 0) {
      uVar6 = (undefined4)local_108;
    }
    else {
      uVar6 = FUN_140e4b060(&local_108);
    }
    dVar1 = (double)thunk_FUN_1412ac390(uVar6);
    local_38 = dVar1 * 0.05 + 0.15;
    bVar5 = 0;
    local_2c = 0;
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_88 = 7;
    FUN_140e9c240(0x1100a8);
    local_88 = 8;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe698);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
    plVar7 = param_1;
    FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
    uVar6 = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_118 = local_68;
    uStack_110 = uStack_60;
    uStack_10c = uStack_5c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_58 = &local_e8;
    local_118 = local_78;
    uStack_110 = uStack_70;
    uStack_10c = uStack_6c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_50 = local_d8;
    if (puVar3 != &local_c8) {
      local_118 = *puVar3;
      uStack_110 = *(undefined4 *)(puVar3 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_118);
    }
    local_48 = &local_c8;
    local_118 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_110 = uRam00000001419df7c8;
    uStack_10c = uRam00000001419df7cc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
    local_40 = local_b8;
    FUN_140e634e0(param_1,param_2,&local_f8,4,CONCAT44(uVar6,DAT_1419fe448),&local_58);
    local_88 = 9;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe698);
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_68,param_1,param_2);
    plVar7 = param_1;
    FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_78,param_1,param_2);
    uVar6 = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_118 = local_68;
    uStack_110 = uStack_60;
    uStack_10c = uStack_5c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_58 = &local_e8;
    local_118 = local_78;
    uStack_110 = uStack_70;
    uStack_10c = uStack_6c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_118);
    local_50 = local_d8;
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
      local_108 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_108,puVar3);
    }
    uStack_10c = 7;
    local_118 = CONCAT44(local_118._4_4_,2);
    FUN_1400462a0(&local_108,&local_118);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = local_108;
    uStack_110 = uStack_100;
    uStack_10c = uStack_fc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_48 = &local_c8;
    local_118 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_110 = uRam00000001419df7c8;
    uStack_10c = uRam00000001419df7cc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
    local_40 = local_b8;
    FUN_140e634e0(param_1,param_2,&local_f8,4,CONCAT44(uVar6,DAT_1419fe448),&local_58);
    local_88 = 0xb;
    FUN_140e9c1f0(0x3f800000);
    local_88 = 0xc;
    FUN_140e9c240(0xffffff);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << (bVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

