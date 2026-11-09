// gml_Script____struct___154_anon_39476_DefineDebuffs_OFFERINGSINIT @ 0x1403fdc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___154_anon_39476_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffd90;
  double **ppdVar14;
  double local_268;
  uint local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong local_248;
  longlong lStack_240;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  double local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  double *local_168;
  double *local_160;
  double *local_158;
  undefined1 *local_150;
  double local_148 [2];
  double local_138 [2];
  double local_128 [2];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_230 = "gml_Script_anon@38575@DefineDebuffs@OFFERINGSINIT";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x635;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_148,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_1fc = 0xffffff;
  local_208 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_24c = 0;
  local_258 = 0;
  local_214 = 0;
  local_220 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x637;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f60f8,0x80000000,&local_208,uVar13,in_stack_fffffffffffffd90);
  if ((uStack_1fc & 0xffffff) == 3) {
    bVar11 = local_208 == 0;
  }
  else {
    bVar11 = (uStack_1fc & 0xffffff) == 5;
  }
  if (bVar11) {
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    puVar7 = (undefined8 *)FUN_140e8da20(&local_c8,local_res8,0);
    if (puVar7 != &local_1e8) {
      local_178 = *puVar7;
      uStack_170 = puVar7[1];
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_178);
    }
    FUN_140e87930(uVar6,DAT_1419f60f8,0x80000000,&local_1e8);
  }
  local_228 = 0x639;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  ppdVar14 = (double **)(in_stack_fffffffffffffd90 & 0xffffffffffffff00);
  puVar7 = (undefined8 *)(uVar13 & 0xffffffffffffff00);
  FUN_140e87440(uVar6,DAT_1419f60f8,0x80000000,&local_208,puVar7,ppdVar14);
  iVar4 = 0;
  if ((uStack_1fc == 2) && (local_208 != 0)) {
    iVar4 = *(int *)(local_208 + 0x24);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_25c = 0;
  local_268 = (double)(iVar4 + -1);
  bVar11 = true;
  do {
    if (!bVar11) {
      local_228 = 0x639;
      uVar2 = local_25c & 0xffffff;
      if (uVar2 == 0) {
LAB_1403fdf3d:
        local_268 = local_268 + -1.0;
      }
      else if (uVar2 == 1) {
        local_268 = (double)FUN_140e4b060(&local_268);
        local_268 = local_268 - 1.0;
        local_25c = 0;
      }
      else if (uVar2 == 7) {
        local_268 = (double)CONCAT44(local_268._4_4_,local_268._0_4_ + -1);
      }
      else if (uVar2 == 10) {
        local_268 = (double)((longlong)local_268 + -1);
      }
      else {
        if (uVar2 == 0xd) {
          local_25c = 0;
          goto LAB_1403fdf3d;
        }
        FUN_140042910(&DAT_14172c450,&local_268,&local_268);
      }
    }
    bVar11 = false;
    local_fc = 0;
    local_108 = 0;
    uVar2 = FUN_140e851f0(&local_268,&local_108,DAT_141955260,1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (0x7fffffff < uVar2) {
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      _eh_vector_destructor_iterator_(local_148,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_238;
      return param_3;
    }
    local_228 = 0x63b;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    uVar3 = FUN_140e4a740(&local_268);
    uVar13 = (ulonglong)puVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419f60f8,uVar3,&local_188,uVar13,
                  (ulonglong)ppdVar14 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar13 >> 0x20);
    lStack_240 = CONCAT44(uStack_17c,uStack_180);
    local_248 = local_188;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_248);
    local_228 = 0x63d;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    local_168 = &local_1f8;
    ppdVar14 = &local_168;
    uVar13 = CONCAT44(uVar3,DAT_141a02ef8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_258,1,uVar13,ppdVar14);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') {
      local_228 = 0x63f;
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_220 = 0;
      local_218 = 0;
      local_214 = 5;
      uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(uVar6,DAT_1419f60f8,0x80000000,&local_208,uVar13,
                    (ulonglong)ppdVar14 & 0xffffffffffffff00);
      uVar3 = (undefined4)(uVar13 >> 0x20);
      lStack_240 = CONCAT44(uStack_1fc,uStack_200);
      local_248 = local_208;
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_248);
      local_160 = local_138;
      local_158 = &local_268;
      local_248 = _DAT_1419e47d0;
      lStack_240 = lRam00000001419e47d8;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_248);
      local_150 = local_118;
      ppdVar14 = &local_160;
      puVar7 = (undefined8 *)CONCAT44(uVar3,DAT_1419fd808);
      FUN_140e634e0(local_res8,local_res10,&local_220,3,puVar7,ppdVar14);
      local_228 = 0x640;
    }
    else {
      local_228 = 0x643;
      iVar4 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_1f8);
      if (0 < iVar4) {
        do {
          local_228 = 0x645;
          plVar8 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57420);
          FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_1c8);
          FUN_140e609c0(local_res8);
          if (&local_1c8 != plVar8) {
            lStack_240 = CONCAT44(uStack_1bc,uStack_1c0);
            local_248 = local_1c8;
            if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(plVar8);
            }
            FUN_140041b80(plVar8,&local_248);
          }
          FUN_140e60910(1);
          local_228 = 0x646;
          puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f62a8);
          uStack_170 = CONCAT44(0xd,(undefined4)uStack_170);
          local_178 = 0x3ff0000000000000;
          if (&local_178 != puVar7) {
            local_248 = 0x3ff0000000000000;
            lStack_240 = uStack_170;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            FUN_140041b80(puVar7,&local_248);
          }
          local_228 = 0x648;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
          local_ec = 0;
          local_f8 = 0x4039000000000000;
          iVar4 = FUN_140e851f0(uVar6,&local_f8,DAT_141955260,1);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          if (iVar4 != -2 && iVar4 < 0) {
            local_228 = 0x648;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0x4039000000000000;
          }
          local_228 = 0x64a;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6248);
          local_dc = 0;
          local_e8 = 0;
          iVar4 = FUN_140e851f0(uVar6,&local_e8,DAT_141955260,1);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          if (iVar4 < 1) {
            local_228 = 0x64d;
            uVar3 = DAT_1419f5cb8;
          }
          else {
            local_228 = 0x64b;
            uVar3 = DAT_1419f6248;
          }
          uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,uVar3);
          FUN_140e609c0(local_res8);
          FUN_1400462a0(uVar6,uVar5);
          FUN_140e60910(1);
          cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_98,&local_res8,&local_res10);
      local_228 = 0x650;
      ppdVar14 = (double **)((ulonglong)ppdVar14 & 0xffffffffffffff00);
      puVar7 = (undefined8 *)(uVar13 & 0xffffffffffffff00);
      FUN_140e87440(&local_1f8,DAT_1419f5cb8,0x80000000,&local_198,puVar7,ppdVar14);
      local_cc = 0;
      local_d8 = 0;
      iVar4 = FUN_140e851f0(&local_198,&local_d8,DAT_141955260,1);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar4 != -2 && iVar4 < 1) {
        local_228 = 0x652;
        iVar4 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,&local_1f8);
        if (0 < iVar4) {
          do {
            local_228 = 0x654;
            plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5fb8);
            plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f170);
            FUN_140e609c0(local_res8);
            if (plVar8 != plVar9) {
              local_248 = *plVar8;
              lStack_240 = plVar8[1];
              if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(plVar9);
              }
              FUN_140041b80(plVar9,&local_248);
            }
            FUN_140e60910(1);
            local_228 = 0x655;
            puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            *puVar10 = 0;
            local_228 = 0x656;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
            FUN_140e87440(uVar6,DAT_1419f5df8,0x80000000,&local_1a8,
                          (ulonglong)puVar7 & 0xffffffffffffff00,
                          (ulonglong)ppdVar14 & 0xffffffffffffff00);
            local_1cc = DAT_141dd27b4;
            local_1d0 = DAT_141dd27b0;
            if ((1 << ((byte)DAT_141dd27b4 & 0x1f) & 0x46U) == 0) {
              local_1d8 = DAT_141dd27a8;
            }
            else {
              FUN_1400419b0(&local_1d8,&DAT_141dd27a8);
            }
            uVar6 = FUN_140069500(uVar6);
            ppdVar14 = (double **)0x0;
            puVar7 = &local_1a8;
            uVar6 = FUN_140e63610(uVar6,local_res10,&local_258,0,puVar7,0);
            iVar4 = FUN_140e851f0(uVar6,&local_1d8,DAT_141955260,0);
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            if (iVar4 != 0) {
              local_228 = 0x657;
              if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_220);
              }
              local_220 = 0;
              local_218 = 0;
              local_214 = 5;
              uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
              FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_1b8,
                            (ulonglong)puVar7 & 0xffffffffffffff00,
                            (ulonglong)ppdVar14 & 0xffffffffffffff00);
              lStack_240 = CONCAT44(DAT_141dd27b4,DAT_141dd27b0);
              local_248 = DAT_141dd27a8;
              if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_148);
              }
              FUN_140041b80(local_148,&local_248);
              local_168 = local_148;
              uVar6 = FUN_140069500(uVar6);
              ppdVar14 = &local_168;
              puVar7 = &local_1b8;
              FUN_140e63610(uVar6,local_res10,&local_220,1,puVar7,ppdVar14);
            }
            cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_b8,&local_res8,&local_res10);
        local_228 = 0x659;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
        uVar13 = (ulonglong)puVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar6,DAT_1419f60f8,0x80000000,&local_208,uVar13,
                      (ulonglong)ppdVar14 & 0xffffffffffffff00);
        uVar3 = (undefined4)(uVar13 >> 0x20);
        lStack_240 = CONCAT44(uStack_1fc,uStack_200);
        local_248 = local_208;
        if ((1 << ((byte)local_148[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_248);
        local_168 = local_148;
        local_160 = &local_268;
        local_248 = _DAT_1419e47d0;
        lStack_240 = lRam00000001419e47d8;
        if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_248);
        local_158 = local_128;
        ppdVar14 = &local_168;
        puVar7 = (undefined8 *)CONCAT44(uVar3,DAT_1419fd808);
        FUN_140e634e0(local_res8,local_res10,&local_258,3,puVar7,ppdVar14);
        if (local_a8 != 0) {
          FUN_140e4cd60();
        }
      }
      if (local_88 != 0) {
        FUN_140e4cd60();
      }
    }
  } while( true );
}

