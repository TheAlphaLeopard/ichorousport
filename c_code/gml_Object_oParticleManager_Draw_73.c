// gml_Object_oParticleManager_Draw_73 @ 0x140bc5820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParticleManager_Draw_73(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar11;
  longlong **pplVar12;
  ulonglong in_stack_fffffffffffffe60;
  longlong **pplVar13;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  uint local_17c;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  byte local_104;
  undefined8 local_100 [2];
  longlong *local_f0;
  undefined8 *local_e8;
  double local_e0;
  undefined4 local_d4;
  double local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  longlong *local_b0;
  undefined4 local_a4;
  longlong *local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_130 = "gml_Object_oParticleManager_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_110,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_94 = 0xffffff;
  local_a0 = (longlong *)0x0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_a4 = 0xffffff;
  local_b0 = (longlong *)0x0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_13c = 0;
  local_148 = 0;
  local_128 = 4;
  local_17c = 0;
  local_188 = 0.0;
  bVar1 = true;
LAB_140bc5930:
  if (!bVar1) {
    local_128 = 4;
    uVar4 = local_17c & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        if (uVar4 == 7) {
          local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_188 = (double)((longlong)local_188 + 1);
        }
        else {
          if (uVar4 == 0xd) goto LAB_140bc5986;
          FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
        }
        goto LAB_140bc5995;
      }
      local_188 = (double)FUN_140e4b060(&local_188);
LAB_140bc5986:
      local_17c = 0;
    }
    local_188 = local_188 + 1.0;
  }
LAB_140bc5995:
  bVar1 = false;
  plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f68);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
    iVar5 = *(int *)(*plVar7 + 0x24);
  }
  local_d4 = 0;
  local_e0 = (double)iVar5;
  iVar5 = FUN_140e851f0(&local_188,&local_e0,DAT_141955260,1);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if (iVar5 != -2 && iVar5 < 0) {
    local_128 = 7;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f68);
    iVar5 = FUN_140e4a740(&local_188);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar8 = *plVar7, lVar8 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar8 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar8 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_178) {
      local_168 = *plVar7;
      uStack_160 = plVar7[1];
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_168);
    }
    local_128 = 8;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    FUN_140e87440(&local_178,DAT_141a0a968,0x80000000,&local_a0,
                  (ulonglong)pcVar11 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    switch(uStack_16c) {
    default:
switchD_140bc5b34_caseD_1:
      lVar8 = 0;
      break;
    case 6:
      lVar8 = local_178;
      break;
    case 0xf:
      iVar5 = (int)((ulonglong)local_178 >> 0x20);
      if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140bc5b34_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar6 = FUN_140e4a8b0(&local_178);
      lVar8 = FUN_140e87250(uVar6);
    }
    in_stack_fffffffffffffe60 = 0;
    pcVar11 = (code *)&local_a0;
    FUN_140e63610(lVar8,local_res10,&local_198,0,pcVar11,0);
    local_128 = 10;
    local_88 = 0;
    uStack_7c = 0xd;
    local_168 = 0;
    uStack_160 = CONCAT44(0xd,uStack_80);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_168);
    local_128 = 0xb;
    iVar5 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_178);
    if (0 < iVar5) {
      do {
        local_128 = 0xd;
        uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05568);
        in_stack_fffffffffffffe60 = in_stack_fffffffffffffe60 & 0xffffffffffffff00;
        pcVar11 = (code *)((ulonglong)pcVar11 & 0xffffffffffffff00);
        FUN_140e87440(uVar9,DAT_1419f3418,0x80000000,&local_c0,pcVar11,in_stack_fffffffffffffe60);
        local_c4 = 0;
        local_d0 = 0.0;
        iVar5 = FUN_140e851f0(&local_c0,&local_d0,DAT_141955260,1);
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        if (iVar5 == -2 || 0 < iVar5) {
          cVar3 = '\0';
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_168 = DAT_1419df7b0;
          uStack_160 = _DAT_1419df7b8;
          if ((1 << ((byte)_local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          FUN_140041b80(&local_110,&local_168);
          local_f0 = &local_110;
          local_168 = DAT_1419df7b0;
          uStack_160 = _DAT_1419df7b8;
          if ((1 << ((byte)local_100[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_100);
          }
          FUN_140041b80(local_100,&local_168);
          local_e8 = local_100;
          pcVar11 = (code *)&local_f0;
          uVar9 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_198,2,pcVar11);
          cVar2 = FUN_140e491e0(uVar9);
          if (cVar2 != '\0') {
            uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f88);
            cVar3 = FUN_140e491e0(uVar9);
          }
        }
        else {
          cVar3 = '\x01';
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_14c = 0xd;
        if (cVar3 == '\0') {
          local_158 = 0;
        }
        else {
          local_158 = 0x3ff0000000000000;
        }
        cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    local_128 = 0x11;
    cVar3 = FUN_140e491e0(&local_158);
    if (cVar3 == '\0') {
      local_128 = 0x14;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6f68);
      FUN_140e609c0(local_res8);
      local_114 = local_13c;
      local_118 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_120 = local_148;
      }
      else {
        FUN_1400419b0(&local_120,&local_148);
      }
      local_res18 = 1;
      FUN_140046040(&local_148);
      uVar6 = FUN_140e4a740(&local_120);
      plVar7 = (longlong *)FUN_140e48e40(puVar10,uVar6);
      FUN_140e609c0(*(undefined8 *)*puVar10);
      if (&local_178 != plVar7) {
        uStack_160 = CONCAT44(uStack_16c,uStack_170);
        local_168 = local_178;
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar7);
        }
        FUN_140041b80(plVar7,&local_168);
      }
      local_res18 = 0;
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140e60910(2);
    }
    else {
      local_128 = 0x12;
      local_168 = DAT_1419df7b0;
      uStack_160 = _DAT_1419df7b8;
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_168);
    }
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
    goto LAB_140bc5930;
  }
  local_128 = 0x17;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uVar6 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f68);
  if (plVar7 != &local_110) {
    local_168 = *plVar7;
    uStack_160 = plVar7[1];
    if ((1 << ((byte)_local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_168);
  }
  local_f0 = &local_110;
  local_e8 = &local_148;
  pplVar13 = &local_f0;
  pplVar12 = (longlong **)CONCAT44(uVar6,DAT_1419fee68);
  FUN_140e634e0(local_res8,local_res10,&local_198,2,pplVar12,pplVar13);
  local_128 = 0x19;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = 0;
  local_128 = 0x1a;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_128 = 0x1a;
      uVar4 = local_17c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_188 = (double)((longlong)local_188 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140bc60cc;
            FUN_140042910(&DAT_14172c3d8,&local_188,&local_188);
          }
          goto LAB_140bc60db;
        }
        local_188 = (double)FUN_140e4b060(&local_188);
LAB_140bc60cc:
        local_17c = 0;
      }
      local_188 = local_188 + 1.0;
    }
LAB_140bc60db:
    bVar1 = false;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f28);
    iVar5 = 0;
    if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
      iVar5 = *(int *)(*plVar7 + 0x24);
    }
    local_c4 = 0;
    local_d0 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_188,&local_d0,DAT_141955260,1);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      local_128 = 0x2d;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uVar6 = (undefined4)((ulonglong)pplVar12 >> 0x20);
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f28);
      if (plVar7 != &local_110) {
        local_168 = *plVar7;
        uStack_160 = plVar7[1];
        if ((1 << (local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        FUN_140041b80(&local_110,&local_168);
      }
      local_f0 = &local_110;
      local_e8 = &local_148;
      FUN_140e634e0(local_res8,local_res10,&local_198,2,CONCAT44(uVar6,DAT_1419fee68),&local_f0);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      _eh_vector_destructor_iterator_(&local_110,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_138;
      return;
    }
    local_128 = 0x1d;
    plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f28);
    iVar5 = FUN_140e4a740(&local_188);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar8 = *plVar7, lVar8 != 0)) {
      if ((iVar5 < 0) || (*(int *)(lVar8 + 0x24) <= iVar5)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                      *(undefined4 *)(lVar8 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar8 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_178) {
      local_168 = *plVar7;
      uStack_160 = plVar7[1];
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_168);
    }
    local_128 = 0x1e;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    FUN_140e87440(&local_178,DAT_141a0a968,0x80000000,&local_b0,
                  (ulonglong)pplVar12 & 0xffffffffffffff00,(ulonglong)pplVar13 & 0xffffffffffffff00)
    ;
    switch(uStack_16c) {
    default:
switchD_140bc627a_caseD_1:
      lVar8 = 0;
      break;
    case 6:
      lVar8 = local_178;
      break;
    case 0xf:
      iVar5 = (int)((ulonglong)local_178 >> 0x20);
      if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140bc627a_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar6 = FUN_140e4a8b0(&local_178);
      lVar8 = FUN_140e87250(uVar6);
    }
    pplVar13 = (longlong **)0x0;
    pplVar12 = &local_b0;
    FUN_140e63610(lVar8,local_res10,&local_198,0,pplVar12,0);
    local_128 = 0x20;
    local_88 = 0;
    uStack_7c = 0xd;
    local_168 = 0;
    uStack_160 = CONCAT44(0xd,uStack_80);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_168);
    local_128 = 0x21;
    iVar5 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_178);
    if (0 < iVar5) {
      do {
        local_128 = 0x23;
        uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05568);
        pplVar13 = (longlong **)((ulonglong)pplVar13 & 0xffffffffffffff00);
        pplVar12 = (longlong **)((ulonglong)pplVar12 & 0xffffffffffffff00);
        FUN_140e87440(uVar9,DAT_1419f3418,0x80000000,&local_c0,pplVar12,pplVar13);
        local_d4 = 0;
        local_e0 = 0.0;
        iVar5 = FUN_140e851f0(&local_c0,&local_e0,DAT_141955260,1);
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        if (iVar5 == -2 || 0 < iVar5) {
          cVar3 = '\0';
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          local_168 = DAT_1419df7b0;
          uStack_160 = _DAT_1419df7b8;
          if ((1 << ((byte)_local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          FUN_140041b80(&local_110,&local_168);
          local_f0 = &local_110;
          local_168 = DAT_1419df7b0;
          uStack_160 = _DAT_1419df7b8;
          if ((1 << ((byte)local_100[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_100);
          }
          FUN_140041b80(local_100,&local_168);
          local_e8 = local_100;
          pplVar12 = &local_f0;
          uVar9 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_198,2,pplVar12);
          cVar2 = FUN_140e491e0(uVar9);
          if (cVar2 != '\0') {
            uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6f88);
            cVar3 = FUN_140e491e0(uVar9);
          }
        }
        else {
          cVar3 = '\x01';
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_14c = 0xd;
        if (cVar3 == '\0') {
          local_158 = 0;
        }
        else {
          local_158 = 0x3ff0000000000000;
        }
        cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    local_128 = 0x27;
    cVar3 = FUN_140e491e0(&local_158);
    if (cVar3 == '\0') {
      local_128 = 0x2a;
      puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6f28);
      FUN_140e609c0(local_res8);
      local_114 = local_13c;
      local_118 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_120 = local_148;
      }
      else {
        FUN_1400419b0(&local_120,&local_148);
      }
      local_res18 = 2;
      FUN_140046040(&local_148);
      uVar6 = FUN_140e4a740(&local_120);
      plVar7 = (longlong *)FUN_140e48e40(puVar10,uVar6);
      FUN_140e609c0(*(undefined8 *)*puVar10);
      if (&local_178 != plVar7) {
        uStack_160 = CONCAT44(uStack_16c,uStack_170);
        local_168 = local_178;
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar7);
        }
        FUN_140041b80(plVar7,&local_168);
      }
      local_res18 = 0;
      if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_120);
      }
      FUN_140e60910(2);
    }
    else {
      local_128 = 0x28;
      local_168 = DAT_1419df7b0;
      uStack_160 = _DAT_1419df7b8;
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_168);
    }
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

