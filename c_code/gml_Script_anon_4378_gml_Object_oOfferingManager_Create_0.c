// gml_Script_anon_4378_gml_Object_oOfferingManager_Create_0 @ 0x140b856e0

undefined8 *
gml_Script_anon_4378_gml_Object_oOfferingManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined4 uVar10;
  ulonglong **ppuVar11;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 local_15c;
  ulonglong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138 [3];
  undefined4 local_12c;
  uint local_128 [3];
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  ulonglong local_e8;
  byte local_dc;
  ulonglong local_d8;
  byte local_cc;
  uint local_c8 [3];
  byte local_bc;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong *local_78;
  ulonglong *local_70;
  uint *local_68;
  uint *local_60;
  undefined1 **local_58;
  
  local_100 = "gml_Script_anon@3294@gml_Object_oOfferingManager_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x7e;
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar4 = (uint *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  local_11c = 0xffffff;
  local_128[0] = 0;
  local_128[1] = 0;
  puVar5 = (ulonglong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  local_12c = 0xffffff;
  local_138[0] = 0;
  local_138[1] = 0;
  local_15c = 0xffffff;
  local_168 = (undefined1 *)0x0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_17c = 0;
  local_188 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x80;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3368);
  if (puVar4 != local_c8) {
    local_178 = *puVar4;
    uStack_174 = puVar4[1];
    uStack_170 = puVar4[2];
    uStack_16c = puVar4[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
  }
  local_68 = local_c8;
  puVar4 = (uint *)FUN_140e63610(param_1,param_2,&local_188,1,uVar6,&local_68);
  if (puVar4 != local_128) {
    local_178 = *puVar4;
    uStack_174 = puVar4[1];
    uStack_170 = puVar4[2];
    uStack_16c = puVar4[3];
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
  }
  local_f8 = 0x81;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if (puVar5 != &local_e8) {
    local_178 = (uint)*puVar5;
    uStack_174 = *(uint *)((longlong)puVar5 + 4);
    uStack_170 = (uint)puVar5[1];
    uStack_16c = *(uint *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
  }
  local_78 = &local_e8;
  ppuVar11 = &local_78;
  puVar4 = (uint *)FUN_140e63610(param_1,param_2,&local_188,1,uVar6,ppuVar11);
  if (puVar4 != local_138) {
    local_178 = *puVar4;
    uStack_174 = puVar4[1];
    uStack_170 = puVar4[2];
    uStack_16c = puVar4[3];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138);
  }
  local_f8 = 0x82;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_15c = 0;
  local_168 = &DAT_bff0000000000000;
  local_f8 = 0x83;
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  cVar3 = FUN_140e491e0(puVar8);
  bVar2 = false;
  bVar1 = true;
  if (cVar3 != '\0') {
    local_f8 = 0x85;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3368);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(local_138,DAT_141a0a8a8,0x80000000,&local_98,uVar6,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar6 >> 0x20);
    local_178 = (uint)local_98;
    uStack_174 = local_98._4_4_;
    uStack_170 = uStack_90;
    uStack_16c = uStack_8c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
    local_78 = &local_e8;
    if (puVar5 != &local_d8) {
      local_178 = (uint)*puVar5;
      uStack_174 = *(uint *)((longlong)puVar5 + 4);
      uStack_170 = (uint)puVar5[1];
      uStack_16c = *(uint *)((longlong)puVar5 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_178);
    }
    local_70 = &local_d8;
    puVar4 = (uint *)FUN_140e634e0(param_1,param_2,&local_148,1,CONCAT44(uVar10,DAT_1419fdca8),
                                   &local_78);
    if (puVar4 != local_c8) {
      local_178 = *puVar4;
      uStack_174 = puVar4[1];
      uStack_170 = puVar4[2];
      uStack_16c = puVar4[3];
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_178);
    }
    local_68 = local_c8;
    uVar6 = local_158;
    ppuVar7 = (undefined1 **)FUN_140e63610(param_1,param_2,&local_188,2,local_158,&local_70);
    if (ppuVar7 != &local_168) {
      local_178 = *(uint *)ppuVar7;
      uStack_174 = *(uint *)((longlong)ppuVar7 + 4);
      uStack_170 = *(uint *)(ppuVar7 + 1);
      uStack_16c = *(uint *)((longlong)ppuVar7 + 0xc);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_178);
    }
  }
  uVar10 = (undefined4)(uVar6 >> 0x20);
  local_f8 = 0x89;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_178 = DAT_1419f5b58 & 0xffffff;
  uStack_174 = (int)(DAT_1419f5b58 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_174 == 0xf) {
    uStack_174 = 0x4000004;
  }
  else {
    uStack_174 = uStack_174 | 0x1000000;
  }
  uStack_14c = 0xf;
  local_158 = CONCAT44(uStack_174,DAT_1419f5b58) & 0xffffffff00ffffff;
  uStack_170 = uStack_150;
  uStack_16c = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_178);
  local_78 = &local_e8;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  cVar3 = FUN_140e491e0(puVar8);
  if (cVar3 == '\0') {
    if (0 < param_4) {
      puVar9 = (ulonglong *)*param_5;
    }
    uStack_14c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_150 = (int)puVar9[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_158 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_158,puVar9);
    }
    puVar5 = &local_158;
  }
  else {
    if (0 < param_4) {
      puVar9 = (ulonglong *)*param_5;
    }
    puVar5 = (ulonglong *)FUN_140087a30(&local_178,puVar9,2);
    bVar2 = true;
    bVar1 = false;
    if (puVar5 == &local_d8) goto LAB_140b85d27;
  }
  local_88 = (undefined4)*puVar5;
  uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_80 = (undefined4)puVar5[1];
  uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_88);
LAB_140b85d27:
  if ((bVar1) && ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  if ((bVar2) && ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_178);
  }
  local_70 = &local_d8;
  local_68 = local_128;
  local_60 = local_138;
  local_58 = &local_168;
  puVar8 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_188,5,CONCAT44(uVar10,DAT_1419fd6d8),&local_78);
  uVar10 = 0xffffff;
  if (puVar8 != &local_118) {
    local_88 = *(undefined4 *)puVar8;
    uStack_84 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_80 = *(undefined4 *)(puVar8 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 0xc);
    FUN_140041b80(&local_118,&local_88);
    uVar10 = uStack_10c;
  }
  local_f8 = 0x8c;
  if (&local_118 != param_3) {
    local_88 = (undefined4)local_118;
    uStack_84 = local_118._4_4_;
    uStack_80 = uStack_110;
    uStack_7c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

