// gml_Object_oRibBurst_CleanUp_0 @ 0x140cad900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oRibBurst_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  longlong **pplVar9;
  double *pdVar10;
  undefined8 *puVar11;
  undefined1 **ppuVar12;
  float fVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined8 local_res20;
  double **ppdVar17;
  ulonglong uVar18;
  undefined4 uVar20;
  undefined8 uVar19;
  ulonglong in_stack_fffffffffffffe40;
  ulonglong uVar21;
  longlong ***ppplVar22;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178 [2];
  longlong *local_168;
  byte local_15c;
  double local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong **local_100;
  longlong **local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  ppuVar12 = &local_e8;
  local_res18 = 0;
  local_120 = "gml_Object_oRibBurst_Step_0";
  local_118 = 0;
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_178,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_8c = 0xffffff;
  local_98 = 0;
  pplVar5 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9698);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_res20 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_118 = 2;
  pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
  pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1eed0);
  if ((longlong **)pdVar6 != local_178) {
    local_1b8 = (longlong *)*pdVar6;
    uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1b8);
  }
  local_100 = local_178;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419ed494,_DAT_1419ed490);
  uStack_1b0 = uRam00000001419ed498;
  uStack_1ac = uRam00000001419ed49c;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1b8);
  local_f8 = &local_168;
  local_1b8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1b0 = DAT_1419df7b8;
  uStack_1ac = DAT_1419df7bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_1b8);
  local_f0 = &local_158;
  FUN_140e609c0(local_res8);
  pdVar8 = (double *)gml_Script_InputDistance(local_res8,local_res10,&local_1a8,3,&local_100);
  if (pdVar8 != pdVar7) {
    local_1b8 = (longlong *)*pdVar8;
    uStack_1b0 = *(undefined4 *)(pdVar8 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar7);
    }
    FUN_140041b80(pdVar7,&local_1b8);
  }
  FUN_140e60910(1);
  local_118 = 4;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pplVar9 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1eed0);
  pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
  pdVar8 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
  if ((longlong **)pdVar6 != local_178) {
    local_1b8 = (longlong *)*pdVar6;
    uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1b8);
  }
  local_100 = local_178;
  if (pplVar9 != &local_168) {
    local_1b8 = *pplVar9;
    uStack_1b0 = *(undefined4 *)(pplVar9 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pplVar9 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1b8);
  }
  local_f8 = &local_168;
  if (pdVar7 != &local_158) {
    local_1b8 = (longlong *)*pdVar7;
    uStack_1b0 = *(undefined4 *)(pdVar7 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
  }
  local_f0 = &local_158;
  FUN_140e609c0(local_res8);
  ppdVar17 = (double **)&local_100;
  pdVar10 = (double *)
            gml_Script_AngleRotateTowardsLerp(local_res8,local_res10,&local_1a8,3,ppdVar17);
  if (pdVar10 != pdVar8) {
    local_1b8 = (longlong *)*pdVar10;
    uStack_1b0 = *(undefined4 *)(pdVar10 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar8);
    }
    FUN_140041b80(pdVar8,&local_1b8);
  }
  FUN_140e60910(1);
  local_118 = 7;
  uStack_18c = 6;
  local_198 = local_res8;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar18 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_c8,uVar18,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar6;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar6);
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  fVar13 = (float)FUN_140e78f90((float)dVar16,(float)dVar15);
  FUN_140162c50(&local_c8,(double)fVar13);
  FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_c8);
  local_118 = 8;
  uStack_18c = 6;
  local_198 = local_res8;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_d8,uVar18,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  uVar20 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar15 = *pdVar6;
  }
  else {
    dVar15 = (double)FUN_140e4b060(pdVar6);
  }
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  fVar13 = (float)FUN_140e79010((float)dVar16,(float)dVar15);
  FUN_140162c50(&local_d8,(double)fVar13);
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_d8);
  local_118 = 10;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar6 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  if ((longlong **)pdVar6 != local_178) {
    local_1b8 = (longlong *)*pdVar6;
    uStack_1b0 = *(undefined4 *)(pdVar6 + 1);
    uStack_1ac = *(undefined4 *)((longlong)pdVar6 + 0xc);
    if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_1b8);
  }
  local_100 = local_178;
  uVar19 = CONCAT44(uVar20,DAT_1419fd658);
  puVar11 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar19,&local_100);
  uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
  if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
    uVar14 = (undefined4)*puVar11;
  }
  else {
    uVar14 = FUN_140e4b060(puVar11);
  }
  dVar15 = (double)FUN_1412a79b0(uVar14);
  if (dVar15 == 0.0) {
    local_118 = 0xb;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
    pplVar9 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe9b8);
    if (pplVar9 != &local_168) {
      local_1b8 = *pplVar9;
      uStack_1b0 = *(undefined4 *)(pplVar9 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pplVar9 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
    }
    local_f8 = &local_168;
    uVar19 = CONCAT44(uVar20,DAT_141a57c30);
    FUN_140e634e0(local_res8,local_res10,&local_188,1,uVar19,&local_f8);
    uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
  }
  local_118 = 0xd;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_1b8 = (longlong *)CONCAT44(uRam0000000141dc7574,_DAT_141dc7570);
  uStack_1b0 = uRam0000000141dc7578;
  uStack_1ac = uRam0000000141dc757c;
  if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_1b8);
  local_100 = local_178;
  ppdVar17 = (double **)&local_100;
  uVar18 = CONCAT44(uVar20,DAT_141a0a0d8);
  puVar11 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar18,ppdVar17);
  uStack_18c = *(undefined4 *)((longlong)puVar11 + 0xc);
  uStack_190 = *(undefined4 *)(puVar11 + 1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
    local_198 = (longlong *)*puVar11;
  }
  else {
    FUN_1400419b0(&local_198,puVar11);
  }
  local_res18 = 1;
  uStack_1ac = 7;
  local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,3);
  FUN_140042560(&local_198,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uVar2 = FUN_140e851f0(pdVar6,&local_198,DAT_141955260,1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (uVar2 < 0x80000000) {
    local_118 = 0xf;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_110 = 0;
    local_108 = 0;
    local_104 = 5;
    (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    uVar21 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419ef438,0x80000000,&local_98,uVar18,uVar21);
    uStack_1ac = 6;
    local_1b8 = local_res8;
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_141a0a828,0x80000000,&local_a8,uVar18,uVar21 & 0xffffffffffffff00);
    uVar20 = (undefined4)(uVar18 >> 0x20);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_198,gml_Object_oRichochetProj_Alarm_0,0);
    if (&local_198 != pplVar5) {
      local_1b8 = local_198;
      uStack_1b0 = uStack_190;
      uStack_1ac = uStack_18c;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar5);
      }
      FUN_140041b80(pplVar5,&local_1b8);
    }
    FUN_140e60910(1);
    if (pplVar5 != &local_168) {
      local_1b8 = *pplVar5;
      uStack_1b0 = *(undefined4 *)(pplVar5 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pplVar5 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
    }
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_f8 = &local_168;
    local_1b8 = (longlong *)local_a8;
    uStack_1b0 = uStack_a0;
    uStack_1ac = uStack_9c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_1b8);
    local_f0 = &local_158;
    local_1b8 = (longlong *)local_98;
    uStack_1b0 = uStack_90;
    uStack_1ac = uStack_8c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1b8);
    local_e8 = local_148;
    ppplVar22 = &local_f8;
    puVar11 = (undefined8 *)
              FUN_140e634e0(local_res8,local_res10,&local_110,2,CONCAT44(uVar20,DAT_1419fd6d8),
                            ppplVar22);
    if (puVar11 != &local_138) {
      local_1b8 = (longlong *)*puVar11;
      uStack_1b0 = *(undefined4 *)(puVar11 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1b8);
    }
    local_e0 = &local_138;
    gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
              (local_res8,local_res10,&local_188,2,ppuVar12);
    local_118 = 0x11;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_118 = 0x12;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,uVar4);
    if (0 < iVar3) {
      do {
        local_118 = 0x14;
        uStack_1ac = 0xf;
        local_1b8 = (longlong *)0x100000000000106;
        ppplVar22 = (longlong ***)((ulonglong)ppplVar22 & 0xffffffffffffff00);
        ppuVar12 = (undefined1 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
        FUN_140e87440(&local_1b8,DAT_141a0a958,0x80000000,&local_b8,ppuVar12,ppplVar22);
        if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        uStack_18c = 0;
        local_198 = (longlong *)&DAT_bff0000000000000;
        iVar3 = FUN_140e851f0(&local_b8,&local_198,DAT_141955260,0);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if (iVar3 != 0) {
          local_118 = 0x15;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          ppuVar12 = (undefined1 **)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a18);
          local_88 = _DAT_1419ed4a0;
          uStack_84 = uRam00000001419ed4a4;
          uStack_80 = uRam00000001419ed4a8;
          uStack_7c = uRam00000001419ed4ac;
          if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_88);
          local_100 = local_178;
          ppplVar22 = &local_100;
          FUN_140e63610(local_res8,local_res10,&local_1a8,1,ppuVar12,ppplVar22);
        }
        cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  }
  local_118 = 0x1b;
  uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar4,local_res20);
  FUN_140e60910(1);
  local_118 = 0x1d;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  FUN_140e63610(local_res8,local_res10,&local_1a8,0,uVar4,0);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return;
}

