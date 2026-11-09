// gml_Script_anon_11275_gml_Object_oRogueLevelManager_Other_12 @ 0x140d0ba80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11275_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  ulonglong local_res10;
  undefined8 *local_res18;
  undefined4 uVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  longlong local_228;
  longlong lStack_220;
  double local_218;
  uint local_20c;
  longlong local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  longlong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_1f0 = "gml_Script_anon@10794@gml_Object_oRogueLevelManager_Other_12";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x17a;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x17b;
  local_20c = 0;
  local_218 = 0.0;
  bVar2 = true;
  do {
    iVar5 = 0;
    if (!bVar2) {
      local_1e8 = 0x17b;
      uVar4 = local_20c & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_218 = (double)((longlong)local_218 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140d0bc4f;
            FUN_140042910(&DAT_14172c3d8,&local_218,&local_218);
          }
          goto LAB_140d0bc5d;
        }
        local_218 = (double)FUN_140e4b060(&local_218);
LAB_140d0bc4f:
        local_20c = 0;
      }
      local_218 = local_218 + 1.0;
    }
LAB_140d0bc5d:
    bVar2 = false;
    if (param_4 < 1) {
      plVar6 = &DAT_1419df7b0;
    }
    else {
      plVar6 = (longlong *)*param_5;
    }
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar5 = *(int *)(*plVar6 + 0x24);
    }
    local_ec = 0;
    local_f8 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_218,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    puVar8 = local_res18;
    if (iVar5 == -2 || -1 < iVar5) {
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1f8;
      return puVar8;
    }
    local_1e8 = 0x17c;
    iVar5 = FUN_140e4a740(&local_218);
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
    if (plVar6 != &local_208) {
      local_228 = *plVar6;
      lStack_220 = plVar6[1];
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_228);
    }
    local_1e8 = 0x17d;
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d4 = 5;
    FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_108,local_res8,local_res10);
    plVar6 = local_res8;
    FUN_140e87170(&local_208,DAT_1419fe158,0x80000000,&local_118,local_res8,local_res10);
    uVar10 = (undefined4)((ulonglong)plVar6 >> 0x20);
    lStack_220 = CONCAT44(uStack_fc,uStack_100);
    local_228 = local_108;
    if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_228);
    local_98 = local_e8;
    lStack_220 = CONCAT44(uStack_10c,uStack_110);
    local_228 = local_118;
    if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_228);
    local_90 = local_d8;
    local_228 = _DAT_141ddb0a8;
    lStack_220 = uRam0000000141ddb0b0;
    if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_228);
    local_88 = local_c8;
    uStack_9c = 0xf;
    local_a8 = 0x100000000000023;
    lStack_220 = CONCAT44(0xf,uStack_a0);
    local_228 = 0x100000000000023;
    if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_228);
    local_80 = local_b8;
    plVar6 = (longlong *)
             FUN_140e634e0(local_res8,local_res10,&local_1e0,4,CONCAT44(uVar10,DAT_141a0a7c8),
                           &local_98);
    if (plVar6 != &local_1a8) {
      local_228 = *plVar6;
      lStack_220 = plVar6[1];
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_228);
    }
    local_1e8 = 0x17e;
    iVar5 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_1a8);
    if (0 < iVar5) {
      do {
        local_1e8 = 0x17f;
        FUN_140e87170(&local_208,DAT_141a0a728,0x80000000,&local_128,local_res8,local_res10);
        lStack_220 = CONCAT44(uStack_11c,uStack_120);
        local_228 = local_128;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_228);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_188);
        local_1e8 = 0x180;
        plVar6 = local_res8;
        uVar11 = local_res10;
        FUN_140e87170(&local_208,DAT_141a0cfc8,0x80000000,&local_138,local_res8,local_res10);
        lStack_220 = CONCAT44(uStack_12c,uStack_130);
        local_228 = local_138;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_228);
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_198);
        local_1e8 = 0x181;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1ac = 0;
        local_1b8 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1b8);
        local_1e8 = 0x182;
        plVar7 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar9 = (ulonglong)plVar6 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_141a1f230,0x80000000,&local_148,uVar9,uVar11);
        FUN_140e609c0(local_res8);
        if (&local_148 != plVar7) {
          lStack_220 = CONCAT44(uStack_13c,uStack_140);
          local_228 = local_148;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar7);
          }
          FUN_140041b80(plVar7,&local_228);
        }
        FUN_140e60910(1);
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_141a1f500,0x80000000,&local_158,uVar9,uVar11);
        FUN_140e609c0(local_res8);
        if (&local_158 != plVar6) {
          lStack_220 = CONCAT44(uStack_14c,uStack_150);
          local_228 = local_158;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar6);
          }
          FUN_140041b80(plVar6,&local_228);
        }
        FUN_140e60910(1);
        local_1e8 = 0x183;
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_141a0a748,0x80000000,&local_168,uVar9,uVar11);
        FUN_140e609c0(local_res8);
        if (&local_168 != plVar6) {
          lStack_220 = CONCAT44(uStack_15c,uStack_160);
          local_228 = local_168;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar6);
          }
          FUN_140041b80(plVar6,&local_228);
        }
        FUN_140e60910(1);
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_141a0a858,0x80000000,&local_178,uVar9,uVar11);
        FUN_140e609c0(local_res8);
        if (&local_178 != plVar6) {
          lStack_220 = CONCAT44(uStack_16c,uStack_170);
          local_228 = local_178;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar6);
          }
          FUN_140041b80(plVar6,&local_228);
        }
        FUN_140e60910(1);
        local_1e8 = 0x184;
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_208,DAT_141a0a7f8,0x80000000,&local_1c8,uVar9,uVar11);
        FUN_140e609c0(local_res8);
        if (&local_1c8 != plVar6) {
          lStack_220 = CONCAT44(uStack_1bc,uStack_1c0);
          local_228 = local_1c8;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar6);
          }
          FUN_140041b80(plVar6,&local_228);
        }
        FUN_140e60910(1);
        plVar6 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c98);
        FUN_140e87440(&local_208,DAT_141a0a7f8,0x80000000,&local_1c8,uVar9 & 0xffffffffffffff00,
                      uVar11 & 0xffffffffffffff00);
        FUN_140e609c0(local_res8);
        if (&local_1c8 != plVar6) {
          lStack_220 = CONCAT44(uStack_1bc,uStack_1c0);
          local_228 = local_1c8;
          if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(plVar6);
          }
          FUN_140041b80(plVar6,&local_228);
        }
        FUN_140e60910(1);
        local_1e8 = 0x185;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fdab8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0x4024000000000000;
        cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_78,&local_res8,&local_res10);
    if (local_68 != 0) {
      FUN_140e4cd60();
    }
  } while( true );
}

