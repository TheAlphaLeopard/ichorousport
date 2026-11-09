// gml_Script_anon_2455_gml_Object_oOfferingManager_Create_0 @ 0x140b82ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_2455_gml_Object_oOfferingManager_Create_0
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  uint local_res20;
  undefined4 uVar13;
  ulonglong uVar11;
  longlong **pplVar12;
  longlong **pplVar14;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  uint local_17c;
  longlong local_178;
  uint uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  longlong local_150;
  undefined4 local_144;
  longlong local_140;
  longlong lStack_138;
  longlong local_130;
  ulonglong uStack_128;
  longlong local_120;
  uint uStack_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_d0;
  double local_c8;
  undefined4 local_bc;
  longlong local_b8 [8];
  longlong local_78;
  byte local_6c;
  
  local_160 = "gml_Script_anon@1192@gml_Object_oOfferingManager_Create_0";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x32;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_res20 = 0xffffff;
  uStack_114 = 0xffffff;
  plVar8 = (longlong *)0x0;
  lVar9 = 0;
  local_120 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0;
  local_110 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x34;
  plVar5 = &DAT_1419df7b0;
  if ((param_4 < 1) || (plVar5 = (longlong *)*param_5, plVar5 != &local_78)) {
    local_130 = *plVar5;
    uStack_128 = plVar5[1];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_130);
  }
  local_d0 = &local_78;
  pplVar12 = (longlong **)CONCAT44(uVar13,DAT_141a0aa48);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_110,1,pplVar12,&local_d0);
  if (plVar5 != &local_120) {
    local_130 = *plVar5;
    uStack_128 = plVar5[1];
    FUN_140041b80(&local_120,&local_130);
    local_res20 = uStack_114;
    lVar9 = local_120;
  }
  local_158 = 0x35;
  plVar5 = (longlong *)FUN_140e8da20(&local_110,param_1,0);
  if (plVar5 != &local_178) {
    local_130 = *plVar5;
    uStack_128 = plVar5[1];
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_130);
  }
  local_158 = 0x36;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0.0;
  bVar1 = true;
LAB_140b83102:
  do {
    uVar13 = (undefined4)((ulonglong)pplVar12 >> 0x20);
    if (!bVar1) {
      local_158 = 0x36;
      uVar3 = local_17c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_188 = (double)((longlong)local_188 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_17c = 0;
              goto LAB_140b83158;
            }
            FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
          }
          goto LAB_140b83162;
        }
        local_188 = (double)FUN_140e4b060(&local_188);
        local_17c = 0;
      }
LAB_140b83158:
      local_188 = local_188 + 1.0;
    }
LAB_140b83162:
    bVar1 = false;
    iVar4 = 0;
    if ((local_res20 == 2) && (lVar9 != 0)) {
      iVar4 = *(int *)(lVar9 + 0x24);
    }
    local_bc = 0;
    local_c8 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_188,&local_c8,DAT_141955260,1);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if (iVar4 == -2 || -1 < iVar4) break;
    local_158 = 0x38;
    iVar4 = FUN_140e4a740(&local_188);
    plVar5 = (longlong *)0x0;
    if (((local_res20 & 0xffffff) == 2) && (lVar9 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar9 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar9 + 0x24));
      }
      else {
        plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar9 + 8));
      }
      if (plVar5 != &local_150) goto LAB_140b83259;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar5 = &local_120;
LAB_140b83259:
      local_140 = *plVar5;
      lStack_138 = plVar5[1];
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      FUN_140041b80(&local_150,&local_140);
    }
    local_158 = 0x39;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (param_4 < 1) {
      plVar5 = &DAT_1419df7b0;
LAB_140b832d3:
      local_140 = *plVar5;
      lStack_138 = plVar5[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_140);
    }
    else {
      plVar5 = (longlong *)*param_5;
      if (plVar5 != local_b8) goto LAB_140b832d3;
    }
    local_f0 = local_b8;
    local_e8 = &local_150;
    pplVar14 = &local_f0;
    uVar11 = CONCAT44(uVar13,DAT_141a01138);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,2,uVar11,pplVar14);
    pplVar12 = (longlong **)(uVar11 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a0ab58,0x80000000,&local_100,pplVar12,
                  (ulonglong)pplVar14 & 0xffffffffffffff00);
    uStack_128 = uStack_128 & 0xffffffff;
    local_130 = 0;
    iVar4 = FUN_140e851f0(&local_100,&local_130,DAT_141955260,1);
    if ((1 << ((byte)(uStack_128 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    uVar13 = (undefined4)((ulonglong)pplVar12 >> 0x20);
    if (!(iVar4 == -2 || 0 < iVar4)) {
      local_158 = 0x39;
      goto LAB_140b83102;
    }
    local_158 = 0x3a;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if (param_4 < 3) {
      plVar5 = &DAT_1419df7b0;
LAB_140b8340f:
      local_140 = *plVar5;
      lStack_138 = plVar5[1];
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_140);
    }
    else {
      plVar5 = (longlong *)param_5[2];
      if (plVar5 != local_b8) goto LAB_140b8340f;
    }
    local_f0 = local_b8;
    local_e8 = &local_150;
    pplVar12 = (longlong **)CONCAT44(uVar13,DAT_1419f5d88);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,2,pplVar12,&local_f0);
    cVar2 = FUN_140e491e0(uVar6);
    uVar13 = (undefined4)((ulonglong)pplVar12 >> 0x20);
    if (cVar2 == '\0') {
      local_158 = 0x3b;
      if (param_4 < 4) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[3];
      }
      cVar2 = FUN_140e491e0(puVar7);
      if (cVar2 != '\0') {
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        if (param_4 < 2) {
          plVar5 = &DAT_1419df7b0;
LAB_140b83510:
          local_140 = *plVar5;
          lStack_138 = plVar5[1];
          if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_140);
        }
        else {
          plVar5 = (longlong *)param_5[1];
          if (plVar5 != local_b8) goto LAB_140b83510;
        }
        local_f0 = local_b8;
        local_e8 = &local_150;
        pplVar12 = &local_f0;
        uVar6 = gml_Script_rolled_list_clear(param_1,param_2,&local_198,2,pplVar12);
        cVar2 = FUN_140e491e0(uVar6);
        uVar13 = (undefined4)((ulonglong)pplVar12 >> 0x20);
        if (cVar2 != '\0') {
          local_158 = 0x3b;
          goto LAB_140b83102;
        }
      }
      local_158 = 0x3c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      local_f0 = &local_178;
      local_e8 = &local_150;
      pplVar12 = (longlong **)CONCAT44(uVar13,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_198,2,pplVar12,&local_f0);
      goto LAB_140b83102;
    }
    local_158 = 0x3a;
  } while( true );
  if (((uStack_16c == 2) && (local_178 != 0)) && (*(int *)(local_178 + 0x24) != 0)) {
    local_158 = 0x3f;
    dVar10 = (double)FUN_140e78f00((longlong)(*(int *)(local_178 + 0x24) + -1));
    iVar4 = (int)dVar10;
    if (((uStack_16c & 0xffffff) == 2) && (local_178 != 0)) {
      if ((iVar4 < 0) || (*(int *)(local_178 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(local_178 + 0x24));
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_178 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar8 = &local_178;
    }
    if (plVar8 == param_3) goto LAB_140b836f7;
    local_140 = *plVar8;
    lStack_138 = plVar8[1];
  }
  else {
    local_158 = 0x3e;
    if (param_3 == &DAT_1419df7b0) goto LAB_140b836f7;
    local_140 = DAT_1419df7b0;
    lStack_138 = _DAT_1419df7b8;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_140);
LAB_140b836f7:
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

