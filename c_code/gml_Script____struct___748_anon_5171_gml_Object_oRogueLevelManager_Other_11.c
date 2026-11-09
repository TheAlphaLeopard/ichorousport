// gml_Script____struct___748_anon_5171_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce9500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script____struct___748_anon_5171_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double dVar9;
  code *pcVar10;
  code *pcVar11;
  ulonglong uVar12;
  longlong **in_stack_fffffffffffffdf0;
  ulonglong uVar13;
  double local_208;
  uint local_1fc;
  double local_1f8;
  uint local_1ec;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  uint uStack_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  longlong local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  longlong local_180;
  undefined4 local_174;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong local_108 [2];
  undefined1 local_f8 [16];
  longlong local_e8 [2];
  longlong local_d8 [6];
  longlong *local_a8;
  undefined1 *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  double *local_80;
  
  local_1c0 = "gml_Script_anon@4328@gml_Object_oRogueLevelManager_Other_11";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0xb3;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_10c = 0;
  local_118 = 0;
  local_184 = 0;
  local_190 = 0;
  local_194 = 0;
  local_1a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  plVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar6 = &DAT_1419df7b0;
  }
  else {
    plVar6 = (longlong *)*param_5;
  }
  if (((*(int *)((longlong)plVar6 + 0xc) != 2) || (*plVar6 == 0)) || (*(int *)(*plVar6 + 0x24) < 1))
  {
    local_1b8 = 0xb4;
    if (param_3 != &DAT_1419df7b0) {
      local_1e8 = DAT_1419df7b0;
      lStack_1e0 = _DAT_1419df7b8;
LAB_140ce9de3:
      FUN_140041b80(param_3,&local_1e8);
    }
LAB_140ce9df1:
    if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a0);
    }
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    _eh_vector_destructor_iterator_(local_108,0x10,6,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_1c8;
    return param_3;
  }
  local_1f8 = 8.0;
  local_1b8 = 0xb9;
  do {
    local_1ec = 0;
LAB_140ce9690:
    local_12c = 0;
    local_138 = 0x3ff0000000000000;
    uVar4 = FUN_140e851f0(&local_1f8,&local_138,DAT_141955260,1);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0x7fffffff < uVar4) {
      local_1b8 = 0xcc;
      if (param_3 == &DAT_1419df7b0) goto LAB_140ce9df1;
      local_1e8 = DAT_1419df7b0;
      lStack_1e0 = _DAT_1419df7b8;
LAB_140ce9d91:
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      goto LAB_140ce9de3;
    }
    local_1b8 = 0xba;
    plVar6 = (longlong *)FUN_140e8da20(&local_118,param_1,0);
    if (plVar6 != &local_1d8) {
      local_1e8 = *plVar6;
      lStack_1e0 = plVar6[1];
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_1e8);
    }
    local_1b8 = 0xbb;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_1fc = 0;
    local_208 = 0.0;
    bVar2 = true;
LAB_140ce9760:
    if (!bVar2) {
      local_1b8 = 0xbb;
      uVar4 = local_1fc & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_208 = (double)((longlong)local_208 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_1fc = 0;
              goto LAB_140ce97ad;
            }
            FUN_140042910(&DAT_14172c3d8,&local_208);
          }
          goto LAB_140ce97b7;
        }
        local_208 = (double)FUN_140e4b060(&local_208);
        local_1fc = 0;
      }
LAB_140ce97ad:
      local_208 = local_208 + 1.0;
    }
LAB_140ce97b7:
    bVar2 = false;
    if (param_4 < 1) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)*param_5;
    }
    iVar5 = 0;
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar5 = *(int *)(*plVar6 + 0x24);
    }
    local_11c = 0;
    local_128 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_208,&local_128,DAT_141955260,1);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if (iVar5 != -2 && iVar5 < 0) {
      local_1b8 = 0xbc;
      iVar5 = FUN_140e4a740(&local_208);
      if (param_4 < 1) {
        plVar6 = &DAT_1419df7b0;
      }
      else {
        plVar6 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar6 != &local_1b0) {
        local_1e8 = *plVar6;
        lStack_1e0 = plVar6[1];
        if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b0);
        }
        FUN_140041b80(&local_1b0,&local_1e8);
      }
      local_1b8 = 0xbd;
      in_stack_fffffffffffffdf0 =
           (longlong **)((ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
      pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
      FUN_140e87440(&local_1b0,DAT_1419fa408,0x80000000,&local_148,pcVar10,in_stack_fffffffffffffdf0
                   );
      iVar5 = FUN_140e851f0(&local_148,&local_1f8,DAT_141955260,0);
      if (iVar5 == 0) {
        local_1b8 = 0xbf;
        pcVar11 = pcVar10;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
          pcVar11 = pcVar10;
        }
        local_190 = 0;
        local_188 = 0;
        local_184 = 5;
        pcVar10 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fa5b8);
        uVar13 = (ulonglong)in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
        uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
        FUN_140e87440(&local_1b0,DAT_1419fa4b8,0x80000000,&local_158,uVar12,uVar13);
        FUN_140e87440(&local_1b0,DAT_1419fa4d8,0x80000000,&local_168,uVar12 & 0xffffffffffffff00,
                      uVar13 & 0xffffffffffffff00);
        lStack_1e0 = CONCAT44(uStack_14c,uStack_150);
        local_1e8 = local_158;
        if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1e8);
        local_a8 = local_108;
        lStack_1e0 = CONCAT44(uStack_15c,uStack_160);
        local_1e8 = local_168;
        if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1e8);
        local_a0 = local_f8;
        if (param_4 < 2) {
          plVar6 = &DAT_1419df7b0;
LAB_140ce9a6f:
          local_1e8 = *plVar6;
          lStack_1e0 = plVar6[1];
          if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_1e8);
        }
        else {
          plVar6 = (longlong *)param_5[1];
          if (plVar6 != local_e8) goto LAB_140ce9a6f;
        }
        local_98 = local_e8;
        if (param_4 < 3) {
          plVar6 = &DAT_1419df7b0;
LAB_140ce9ac0:
          local_1e8 = *plVar6;
          lStack_1e0 = plVar6[1];
          if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_1e8);
        }
        else {
          plVar6 = (longlong *)param_5[2];
          if (plVar6 != local_d8) goto LAB_140ce9ac0;
        }
        local_90 = local_d8;
        in_stack_fffffffffffffdf0 = &local_a8;
        uVar7 = FUN_140e63610(param_1,param_2,&local_190,4,pcVar10,in_stack_fffffffffffffdf0);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          local_1b8 = 0xc0;
          if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a0);
          }
          local_1a0 = 0;
          local_198 = 0;
          local_194 = 5;
          local_88 = &local_1d8;
          local_80 = &local_208;
          in_stack_fffffffffffffdf0 = &local_88;
          pcVar10 = (code *)CONCAT44((int)((ulonglong)pcVar10 >> 0x20),DAT_1419fe568);
          FUN_140e634e0(param_1,param_2,&local_1a0,2,pcVar10,in_stack_fffffffffffffdf0);
        }
      }
      else {
        local_1b8 = 0xbd;
      }
      goto LAB_140ce9760;
    }
    if (((uStack_1cc == 2) && (local_1d8 != 0)) && (0 < *(int *)(local_1d8 + 0x24))) {
      local_1b8 = 0xc5;
      dVar9 = (double)FUN_140e78f00((longlong)(*(int *)(local_1d8 + 0x24) + -1));
      iVar5 = (int)dVar9;
      plVar6 = (longlong *)0x0;
      if (((uStack_1cc & 0xffffff) == 2) && (local_1d8 != 0)) {
        if ((iVar5 < 0) || (*(int *)(local_1d8 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(local_1d8 + 0x24));
        }
        else {
          plVar6 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(local_1d8 + 8));
        }
        if (plVar6 != &local_180) goto LAB_140ce9cea;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar6 = &local_1d8;
LAB_140ce9cea:
        local_1e8 = *plVar6;
        lStack_1e0 = plVar6[1];
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_1e8);
      }
      local_1b8 = 0xc6;
      iVar5 = FUN_140e4a740(&local_180);
      if (0 < param_4) {
        plVar8 = (longlong *)*param_5;
      }
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != param_3) {
        local_1e8 = *plVar8;
        lStack_1e0 = plVar8[1];
        goto LAB_140ce9d91;
      }
      goto LAB_140ce9df1;
    }
    local_1b8 = 0xc9;
    uVar4 = local_1ec & 0xffffff;
    if (uVar4 == 0) {
LAB_140ce9c23:
      local_1f8 = local_1f8 + -1.0;
      goto LAB_140ce9690;
    }
    if (uVar4 != 1) {
      if (uVar4 == 7) {
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + -1);
      }
      else if (uVar4 == 10) {
        local_1f8 = (double)((longlong)local_1f8 + -1);
      }
      else {
        if (uVar4 == 0xd) {
          local_1ec = 0;
          goto LAB_140ce9c23;
        }
        FUN_140042910(&DAT_14172c450,&local_1f8);
      }
      goto LAB_140ce9690;
    }
    local_1f8 = (double)FUN_140e4b060(&local_1f8);
    local_1f8 = local_1f8 - 1.0;
  } while( true );
}

