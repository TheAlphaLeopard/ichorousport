// gml_Object_oOfferingDesc_Draw_64 @ 0x140b75ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oOfferingDesc_Draw_64(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  
  local_130 = "gml_Object_oOfferingDesc_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_128 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_f8) {
    local_178 = (undefined1 *)*puVar3;
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
  }
  local_78 = &local_f8;
  uVar9 = CONCAT44(uVar10,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,&local_78);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_128 = 4;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_88,param_1,param_2);
    local_178 = (undefined1 *)local_88;
    uStack_170 = uStack_80;
    uStack_16c = uStack_7c;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_178);
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_110);
    local_128 = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar5 = param_1;
    FUN_140e87170(uVar4,DAT_1419fe158,0x80000000,&local_98,param_1,param_2);
    uVar10 = (undefined4)((ulonglong)plVar5 >> 0x20);
    local_178 = (undefined1 *)local_98;
    uStack_170 = uStack_90;
    uStack_16c = uStack_8c;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_178);
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_120);
  }
  local_128 = 0x17;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eedf8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eedb8);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eed18);
  FUN_140e609c0(param_1);
  uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_140 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_148,puVar3);
  }
  uStack_16c = 0;
  local_178 = (undefined1 *)0x3fe4cccccccccccd;
  FUN_140042560(&local_148,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  iVar2 = FUN_140e851f0(uVar4,&local_148,DAT_141955260,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar5);
  }
  *(undefined4 *)((longlong)plVar5 + 0xc) = 0xd;
  if (iVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0x3ff00000;
  }
  *plVar5 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_128 = 0x19;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eee08);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
LAB_140b76586:
    local_128 = 0x22;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eee08);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') goto LAB_140b76779;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0d3e8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') goto LAB_140b76779;
    local_128 = 0x24;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eee08);
    uStack_16c = 0xd;
    local_178 = (undefined1 *)0x3ff0000000000000;
    if (&local_178 != puVar3) {
      local_148 = 0x3ff0000000000000;
      uStack_140 = uStack_170;
      uStack_13c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_148);
    }
    local_128 = 0x26;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a067b8);
    uStack_16c = 0;
    local_178 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar4,&local_178,DAT_141955260,0);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (iVar2 != 0) goto LAB_140b76779;
    local_128 = 0x27;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar6 = _DAT_141dd9e88;
    uVar8 = uRam0000000141dd9e8c;
    uStack_170 = uRam0000000141dd9e90;
    uStack_16c = DAT_141dd9e94;
  }
  else {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0d3e8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') goto LAB_140b76586;
    local_128 = 0x1b;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_16c = 0xf;
    local_178 = (undefined1 *)0x1000002000000c7;
    local_148 = 0x1000002000000c7;
    uStack_140 = uStack_170;
    uStack_13c = 0xf;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_78 = &local_f8;
    local_178 = (undefined1 *)CONCAT44(uRam00000001419ec584,_DAT_1419ec580);
    uStack_170 = uRam00000001419ec588;
    uStack_16c = uRam00000001419ec58c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_70 = local_e8;
    local_178 = (undefined1 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_170 = uRam00000001419df7a8;
    uStack_16c = uRam00000001419df7ac;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_178);
    local_68 = local_d8;
    local_178 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
    local_60 = local_c8;
    local_178 = (undefined1 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_178);
    local_58 = local_b8;
    local_a8 = FUN_140e794b0(0xcccccccd,0x3ff4000000000000);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    uVar4 = CONCAT44(uVar10,DAT_141a0a2e8);
    local_50 = &local_a8;
    FUN_140e634e0(param_1,param_2,&local_168,6,uVar4,&local_78);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_128 = 0x1c;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419eee08);
    uStack_16c = 0xd;
    local_178 = (undefined1 *)0x0;
    if (&local_178 != puVar3) {
      local_148 = 0;
      uStack_140 = uStack_170;
      uStack_13c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_148);
    }
    local_128 = 0x1e;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a067b8);
    uStack_16c = 0;
    local_178 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar4,&local_178,DAT_141955260,0);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (iVar2 != 0) goto LAB_140b76779;
    local_128 = 0x1f;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar6 = _DAT_141dd9e78;
    uVar8 = uRam0000000141dd9e7c;
    uStack_170 = uRam0000000141dd9e80;
    uStack_16c = DAT_141dd9e84;
  }
  local_178 = (undefined1 *)CONCAT44(uVar8,uVar6);
  local_15c = 5;
  local_160 = 0;
  local_168 = 0;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_178);
  local_78 = &local_f8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar10,DAT_141a1c640),&local_78);
  if (puVar3 != &local_158) {
    local_178 = (undefined1 *)*puVar3;
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_178);
  }
  FUN_140e86fa0(param_1,DAT_141a1b910,0x80000000,&local_158);
LAB_140b76779:
  local_128 = 0x2b;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar4);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

