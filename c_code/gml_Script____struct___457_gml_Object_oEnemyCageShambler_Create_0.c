// gml_Script____struct___457_gml_Object_oEnemyCageShambler_Create_0 @ 0x14096c7e0

undefined8 *
gml_Script____struct___457_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong **pplVar9;
  longlong **pplVar10;
  undefined4 uVar11;
  undefined4 *local_res18 [2];
  longlong *plVar12;
  ulonglong uVar13;
  undefined4 **ppuVar14;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_100 = "gml_Script_anon@15478@___struct___457@gml_Object_oEnemyCageShambler_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 700;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x2bd;
  uStack_ac = 0xf;
  local_b8 = (longlong *)0x1000001000000aa;
  local_88 = 0xaa;
  uStack_84 = 0x1000001;
  uStack_80 = uStack_b0;
  uStack_7c = 0xf;
  FUN_140041b80(&local_68,&local_88);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_68);
  local_f8 = 0x2be;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d0);
  local_f8 = 0x2bf;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e0);
  local_f8 = 0x2c0;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  FUN_140e63610(param_1,param_2,&local_148,0,uVar6,0);
  uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_f8 = 0x2c1;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_f8 = 0x2c3;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar8 != local_98) {
    local_88 = *puVar8;
    uStack_84 = puVar8[1];
    uStack_80 = puVar8[2];
    uStack_7c = puVar8[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_88);
  }
  local_res18[0] = local_98;
  ppuVar14 = local_res18;
  uVar13 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar13,ppuVar14);
  cVar5 = FUN_140e491e0(uVar6);
  if (cVar5 != '\0') {
    local_f8 = 0x2c4;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
    plVar12 = param_1;
    uVar13 = param_2;
    FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_118,param_1,param_2);
    local_12c = 6;
    ppuVar14 = (undefined4 **)(uVar13 & 0xffffffffffffff00);
    uVar13 = (ulonglong)plVar12 & 0xffffffffffffff00;
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_a8,uVar13,ppuVar14);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_11c = local_10c;
    local_120 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_128 = local_118;
    }
    else {
      FUN_1400419b0(&local_128,&local_118);
    }
    FUN_1400462a0(&local_128,&local_a8);
    if ((local_11c & 0xffffff) == 0) {
      uVar11 = (undefined4)local_128;
    }
    else {
      uVar11 = FUN_140e4b060(&local_128);
    }
    dVar1 = (double)FUN_140e79500(uVar11);
    if (dVar1 == 0.0) {
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
      local_12c = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_130 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
        local_138 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_138,puVar7);
      }
      pplVar10 = &local_138;
      bVar4 = false;
      bVar3 = false;
      bVar2 = true;
    }
    else {
      puVar7 = (undefined8 *)FUN_140046450(&local_88,&local_118,&local_a8);
      if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
        uVar11 = (undefined4)*puVar7;
      }
      else {
        uVar11 = FUN_140e4b060(puVar7);
      }
      local_b8 = (longlong *)FUN_140e79500(uVar11);
      uStack_ac = 0;
      pplVar10 = &local_b8;
      bVar4 = true;
      bVar3 = true;
      bVar2 = false;
    }
    uVar11 = uStack_ac;
    FUN_140e609c0(param_1);
    if (pplVar10 != pplVar9) {
      local_58 = *(undefined4 *)pplVar10;
      uStack_54 = *(undefined4 *)((longlong)pplVar10 + 4);
      uStack_50 = *(undefined4 *)(pplVar10 + 1);
      uStack_4c = *(undefined4 *)((longlong)pplVar10 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar9);
      }
      FUN_140041b80(pplVar9,&local_58);
    }
    if (bVar2) {
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
    }
    if (bVar3) {
      if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
    }
    if ((bVar4) && ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140e60910(1);
  }
  local_f8 = 0x2c6;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f03d8);
  FUN_140e87440(uVar6,DAT_1419f4a98,0x80000000,&local_78,uVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  uVar6 = FUN_140069500(uVar6);
  FUN_140e63610(uVar6,param_2,&local_148,0,&local_78,0);
  local_f8 = 0x2c8;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0;
  local_f0 = 0;
  FUN_140e87930(uVar6,DAT_1419f04f8,0x80000000,&local_f0);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

