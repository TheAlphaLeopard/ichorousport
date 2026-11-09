// gml_Script_anon_3294_gml_Object_oOfferingManager_Create_0 @ 0x140b83800

undefined8 *
gml_Script_anon_3294_gml_Object_oOfferingManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined1 auVar1 [12];
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar15 [16];
  undefined4 uVar17;
  longlong **pplVar16;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  longlong local_160;
  uint uStack_154;
  undefined1 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_120;
  undefined4 local_114;
  longlong local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  uint local_f0;
  longlong local_e8;
  uint uStack_dc;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  byte local_ac;
  longlong local_a8 [13];
  
  local_170 = "gml_Script_anon@1741@gml_Object_oOfferingManager_Create_0";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x43;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  puVar8 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  local_104 = 0xffffff;
  local_110 = 0;
  uStack_154 = 0xffffff;
  local_160 = 0;
  local_f0 = 0xffffff;
  uStack_dc = 0xffffff;
  lVar12 = 0;
  local_e8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_124 = 0;
  local_130 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_168 = 0x45;
  plVar13 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)*param_5;
  }
  cVar4 = FUN_140e491e0(puVar11);
  if (cVar4 == '\0') {
    local_144 = *(undefined4 *)((longlong)puVar8 + 0xc);
    local_148 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_150 = (undefined1 *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_150,puVar8);
    }
    ppuVar9 = &local_150;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    uStack_190 = puVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_198 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_198,puVar7);
    }
    ppuVar9 = (undefined1 **)&local_198;
    bVar3 = true;
    bVar2 = false;
  }
  local_188 = *ppuVar9;
  uStack_180 = ppuVar9[1];
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_188);
  if ((bVar2) && ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_150);
  }
  if ((bVar3) && ((1 << ((byte)(uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_198);
  }
  local_168 = 0x46;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  cVar4 = FUN_140e491e0(puVar7);
  if (cVar4 == '\0') {
    local_168 = 0x49;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    FUN_14040a500(param_1,param_2,&local_1a8,0,0);
  }
  else {
    local_168 = 0x47;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    FUN_1403ed380(param_1,param_2,&local_1a8,0,0);
  }
  local_168 = 0x4b;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f48d8);
  if ((param_4 < 1) || (plVar13 = (longlong *)*param_5, plVar13 != &local_b8)) {
    local_188 = (undefined1 *)*plVar13;
    uStack_180 = (undefined1 *)plVar13[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  local_d8 = &local_b8;
  plVar13 = (longlong *)FUN_140e63610(param_1,param_2,&local_1a8,1,uVar10,&local_d8);
  uVar17 = (undefined4)((ulonglong)uVar10 >> 0x20);
  if (plVar13 != &local_160) {
    local_188 = (undefined1 *)*plVar13;
    uStack_180 = (undefined1 *)plVar13[1];
    if ((1 << ((byte)uStack_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_188);
  }
  local_168 = 0x4c;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_d8 = &local_110;
  pplVar16 = (longlong **)CONCAT44(uVar17,DAT_141a0aa48);
  plVar13 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,pplVar16,&local_d8);
  if (plVar13 == &local_e8) {
    uVar14 = local_f0;
    uVar10 = extraout_XMM0_Qb;
  }
  else {
    local_188 = (undefined1 *)*plVar13;
    uStack_180 = (undefined1 *)plVar13[1];
    FUN_140041b80(&local_e8,&local_188);
    lVar12 = local_e8;
    uVar14 = uStack_dc;
    uVar10 = extraout_XMM0_Qb_00;
  }
  local_168 = 0x4d;
  auVar1._4_8_ = uVar10;
  auVar1._0_4_ = local_198._4_4_;
  auVar15._0_8_ = auVar1._0_8_ << 0x20;
  auVar15._8_4_ = (undefined4)uStack_190;
  auVar15._12_4_ = 0xd;
  uStack_190 = auVar15._8_8_;
  local_198 = (undefined1 *)0x0;
  local_188 = (undefined1 *)0x0;
  uStack_180 = (undefined1 *)uStack_190;
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_188);
  local_168 = 0x4e;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1ac = 0;
  local_1b8 = 0.0;
  bVar2 = true;
  do {
    iVar6 = 0;
    if (!bVar2) {
      local_168 = 0x4e;
      uVar5 = local_1ac & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_1b8 = (double)((longlong)local_1b8 + 1);
          }
          else {
            if (uVar5 == 0xd) goto LAB_140b83d68;
            FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
          }
          goto LAB_140b83d76;
        }
        local_1b8 = (double)FUN_140e4b060(&local_1b8);
LAB_140b83d68:
        local_1ac = 0;
      }
      local_1b8 = local_1b8 + 1.0;
    }
LAB_140b83d76:
    bVar2 = false;
    if ((uVar14 == 2) && (lVar12 != 0)) {
      iVar6 = *(int *)(lVar12 + 0x24);
    }
    uStack_190 = uStack_190 & 0xffffffff;
    local_198 = (undefined1 *)(double)iVar6;
    iVar6 = FUN_140e851f0(&local_1b8,&local_198,DAT_141955260,1);
    if ((1 << ((byte)(uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (iVar6 == -2 || -1 < iVar6) goto LAB_140b83f74;
    local_168 = 0x50;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    plVar13 = (longlong *)0x0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    local_d8 = &local_160;
    iVar6 = FUN_140e4a740(&local_1b8);
    if (((uVar14 & 0xffffff) == 2) && (lVar12 != 0)) {
      if ((iVar6 < 0) || (*(int *)(lVar12 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                      *(undefined4 *)(lVar12 + 0x24));
      }
      else {
        plVar13 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar12 + 8));
      }
      if (plVar13 != local_a8) goto LAB_140b83e82;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar13 = &local_e8;
LAB_140b83e82:
      local_188 = (undefined1 *)*plVar13;
      uStack_180 = (undefined1 *)plVar13[1];
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_188);
    }
    local_d0 = local_a8;
    pplVar16 = &local_d8;
    uVar10 = FUN_14022ffd0(param_1,param_2,&local_1a8,2,pplVar16);
    local_144 = 0;
    local_150 = &DAT_bff0000000000000;
    iVar6 = FUN_140e851f0(uVar10,&local_150,DAT_141955260,0);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_150);
    }
  } while (iVar6 != 0);
  local_168 = 0x52;
  local_198 = (undefined1 *)0x3ff0000000000000;
  uVar17 = (undefined4)uStack_190;
  uStack_190 = CONCAT44(0xd,uVar17);
  local_188 = (undefined1 *)0x3ff0000000000000;
  uStack_180 = (undefined1 *)CONCAT44(0xd,uVar17);
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  FUN_140041b80(&local_140,&local_188);
LAB_140b83f74:
  local_168 = 0x57;
  cVar4 = FUN_140e491e0(&local_140);
  if (cVar4 != '\0') {
    local_168 = 0x59;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1ac = 0;
    local_1b8 = 0.0;
    bVar2 = true;
LAB_140b83fc0:
    uVar17 = (undefined4)((ulonglong)pplVar16 >> 0x20);
    if (!bVar2) {
      local_168 = 0x59;
      uVar5 = local_1ac & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_1b8 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_1b8 = (double)((longlong)local_1b8 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_1ac = 0;
              goto LAB_140b8401a;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1b8,&local_1b8);
          }
          goto LAB_140b84024;
        }
        local_1b8 = (double)FUN_140e4b060(&local_1b8);
        local_1ac = 0;
      }
LAB_140b8401a:
      local_1b8 = local_1b8 + 1.0;
    }
LAB_140b84024:
    bVar2 = false;
    iVar6 = 0;
    if ((uStack_154 == 2) && (local_160 != 0)) {
      iVar6 = *(int *)(local_160 + 0x24);
    }
    uStack_190 = uStack_190 & 0xffffffff;
    local_198 = (undefined1 *)(double)iVar6;
    iVar6 = FUN_140e851f0(&local_1b8,&local_198,DAT_141955260,1);
    if ((1 << ((byte)(uStack_190 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (iVar6 != -2 && iVar6 < 0) {
      local_168 = 0x5b;
      iVar6 = FUN_140e4a740(&local_1b8);
      plVar13 = (longlong *)0x0;
      if (((uStack_154 & 0xffffff) == 2) && (local_160 != 0)) {
        if ((iVar6 < 0) || (*(int *)(local_160 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)(local_160 + 0x24));
        }
        else {
          plVar13 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(local_160 + 8));
        }
        if (plVar13 != &local_120) goto LAB_140b84125;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar13 = &local_160;
LAB_140b84125:
        local_188 = (undefined1 *)*plVar13;
        uStack_180 = (undefined1 *)plVar13[1];
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_188);
      }
      local_168 = 0x5c;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      local_d8 = &local_110;
      local_d0 = &local_120;
      pplVar16 = (longlong **)CONCAT44(uVar17,DAT_1419fcba8);
      uVar10 = FUN_140e634e0(param_1,param_2,&local_1a8,2,pplVar16,&local_d8);
      cVar4 = FUN_140e491e0(uVar10);
      uVar17 = (undefined4)((ulonglong)pplVar16 >> 0x20);
      if (cVar4 != '\0') {
        local_168 = 0x5d;
        if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        local_f4 = 0;
        local_100 = 0;
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        local_130 = 0;
        local_128 = 0;
        local_124 = 5;
        local_c8 = &local_110;
        local_c0 = &local_120;
        pplVar16 = (longlong **)CONCAT44(uVar17,DAT_141a01138);
        uVar10 = FUN_140e634e0(param_1,param_2,&local_130,2,pplVar16,&local_c8);
        FUN_140e87930(uVar10,DAT_141a0ab58,0x80000000,&local_100);
      }
      goto LAB_140b83fc0;
    }
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return param_3;
}

