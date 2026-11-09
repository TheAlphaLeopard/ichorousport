// gml_Object_oShopPedistal_Create_0 @ 0x140d6ceb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oShopPedistal_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  code *pcVar12;
  ulonglong **ppuVar13;
  longlong *plVar14;
  ulonglong in_stack_fffffffffffffdc0;
  ulonglong uVar15;
  longlong *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  ulonglong local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  ulonglong *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  ulonglong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1e0 = "gml_Object_oShopItem_Step_0";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  local_17c = 0xffffff;
  local_188 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_1d8 = 3;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
  ppuVar13 = (ulonglong **)((ulonglong)pcVar12 & 0xffffffffffffff00);
  FUN_140e87440(uVar4,DAT_141a0d3e8,0x80000000,&local_68,ppuVar13,in_stack_fffffffffffffdc0);
  cVar1 = FUN_140e491e0(&local_68);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_208 = (longlong *)CONCAT44(uRam00000001419edc74,_DAT_1419edc70);
    uStack_200 = uRam00000001419edc78;
    uStack_1fc = uRam00000001419edc7c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_208);
    local_178 = &local_1c8;
    local_208 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_200 = DAT_1419df7b8;
    uStack_1fc = DAT_1419df7bc;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_208);
    local_170 = local_1b8;
    ppuVar13 = &local_178;
    uVar4 = gml_Script_InputPressedMany(param_1,param_2,&local_228,2,ppuVar13);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_1d8 = 5;
      puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff528);
      uStack_20c = 0xf;
      local_218 = (longlong *)0x100000000000106;
      in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
      uVar7 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_218,DAT_141a57b90,0x80000000,&local_78,uVar7,in_stack_fffffffffffffdc0);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uStack_20c = 0xf;
      local_218 = (longlong *)0x100000000000106;
      in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
      ppuVar13 = (ulonglong **)(uVar7 & 0xffffffffffffff00);
      FUN_140e87440(&local_218,DAT_141a1d7d0,0x80000000,&local_b8,ppuVar13,in_stack_fffffffffffffdc0
                   );
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_1f0 = (undefined4)puVar5[1];
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
        local_1f8 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_1f8,puVar5);
      }
      FUN_140042560(&local_1f8,&local_b8);
      iVar2 = FUN_140e851f0(&local_78,&local_1f8,DAT_141955260,1);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if (iVar2 == -2 || -1 < iVar2) {
        local_1d8 = 0xc;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56ba0);
        uVar15 = 0;
        FUN_140e63610(param_1,param_2,&local_228,0,uVar7,0);
        local_1d8 = 0xe;
        puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff528);
        uStack_20c = 0xf;
        local_218 = (longlong *)0x100000000000106;
        uVar15 = uVar15 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(&local_218,DAT_141a1d7d0,0x80000000,&local_b8,uVar7,uVar15);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
          uVar11 = *puVar5;
        }
        else {
          uVar11 = FUN_140e4b060(puVar5);
        }
        uStack_1fc = 0;
        local_208 = (longlong *)(uVar11 ^ 0x8000000000000000);
        local_1ec = 0;
        local_1f0 = uStack_200;
        local_1f8 = local_208;
        FUN_140042560(&local_1f8,&local_b8);
        uStack_20c = local_1ec;
        uStack_210 = local_1f0;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
          local_218 = local_1f8;
        }
        else {
          FUN_1400419b0(&local_218,&local_1f8);
        }
        uStack_22c = 7;
        local_238 = (longlong *)CONCAT44(local_238._4_4_,0x19);
        FUN_1400460e0(&local_218,&local_238);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = local_218;
        uStack_230 = uStack_210;
        uStack_22c = uStack_20c;
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_238);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1d8 = 0xf;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uStack_22c = 0xf;
        local_238 = (longlong *)0x100000000000106;
        FUN_140e87440(&local_238,DAT_141a02e68,0x80000000,&local_88,uVar7 & 0xffffffffffffff00,
                      uVar15 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_178 = &local_c8;
        uStack_22c = 0xf;
        local_238 = (longlong *)0x100000000000106;
        uVar3 = FUN_140069500(&local_238);
        FUN_140e63610(uVar3,param_2,&local_228,1,&local_88,&local_178);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_1d8 = 0x11;
        puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
        if (puVar5 != &local_1c8) {
          local_208 = (longlong *)*puVar5;
          uStack_200 = (undefined4)puVar5[1];
          uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_208);
        }
        local_178 = &local_1c8;
        FUN_140edd0e0(param_1,param_2,1,&local_178);
        local_1d8 = 0x12;
        FUN_140edd0e0(param_1,param_2,0,0);
        local_1d8 = 0x14;
        goto LAB_140d6e132;
      }
      local_1d8 = 7;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x4034000000000000;
    }
  }
  local_1d8 = 0x1a;
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  uStack_22c = 0;
  local_238 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(puVar5,&local_238,DAT_141955260,1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (0 < iVar2) {
    local_1d8 = 0x1c;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
    uVar7 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419eed38,0x80000000,&local_a8,uVar7,in_stack_fffffffffffffdc0);
    uVar10 = FUN_140e794b0(0,0);
    FUN_140162c50(&local_a8,uVar10);
    FUN_140e87930(uVar4,DAT_1419eed38,0x80000000,&local_a8);
    local_1d8 = 0x1d;
    uStack_22c = 6;
    in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
    ppuVar13 = (ulonglong **)(uVar7 & 0xffffffffffffff00);
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_1419fde18,0x80000000,&local_148,ppuVar13,in_stack_fffffffffffffdc0)
    ;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uVar10 = FUN_140e794b0(0,0);
    uStack_20c = local_13c;
    uStack_210 = local_140;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
      local_218 = local_148;
    }
    else {
      FUN_1400419b0(&local_218,&local_148);
    }
    FUN_140162c50(&local_218,uVar10);
    local_208 = local_218;
    uStack_200 = uStack_210;
    uStack_1fc = uStack_20c;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_208);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_d8);
  }
  local_1d8 = 0x21;
  uStack_22c = 6;
  in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_e8,uVar7,in_stack_fffffffffffffdc0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = (longlong *)local_e8;
  uStack_200 = uStack_e0;
  uStack_1fc = uStack_dc;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_208);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  FUN_140e86c30(uVar4,DAT_1419fe0e8,0x80000000,&local_f8);
  local_1d8 = 0x22;
  uStack_22c = 6;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_108,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = (longlong *)local_108;
  uStack_200 = uStack_100;
  uStack_1fc = uStack_fc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_208);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  FUN_140e86c30(uVar4,DAT_1419fe158,0x80000000,&local_118);
  local_1d8 = 0x24;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_210 = (undefined4)puVar5[1];
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
    local_218 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_218,puVar5);
  }
  uStack_22c = 7;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,1);
  FUN_1400462a0(&local_218,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = local_218;
  uStack_200 = uStack_210;
  uStack_1fc = uStack_20c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_208);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_178 = &local_1c8;
  local_208 = (longlong *)CONCAT44(uRam0000000141dc76b4,_DAT_141dc76b0);
  uStack_200 = uRam0000000141dc76b8;
  uStack_1fc = uRam0000000141dc76bc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_170 = local_1b8;
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e79090(&local_228,2,&local_178);
  if (puVar8 != puVar6) {
    local_208 = (longlong *)*puVar8;
    uStack_200 = *(undefined4 *)(puVar8 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_208);
  }
  FUN_140e60910(1);
  local_1d8 = 0x26;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  uStack_22c = 0xf;
  local_238 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 0xf;
  local_238 = (longlong *)0x1000000000000ee;
  plVar14 = param_1;
  FUN_140e87170(&local_238,DAT_1419fe158,0x80000000,&local_138,param_1,param_2);
  uVar10 = (undefined4)((ulonglong)plVar14 >> 0x20);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = (longlong *)local_128;
  uStack_200 = uStack_120;
  uStack_1fc = uStack_11c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_208);
  local_178 = &local_1c8;
  local_208 = local_138;
  uStack_200 = uStack_130;
  uStack_1fc = uStack_12c;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_170 = local_1b8;
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x10000000000013b;
  local_238 = (longlong *)0x10000000000013b;
  uStack_230 = uStack_200;
  uStack_22c = 0xf;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_238);
  local_168 = local_1a8;
  ppuVar13 = &local_178;
  uVar7 = CONCAT44(uVar10,DAT_141a1f460);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_228,3,uVar7,ppuVar13);
  if (puVar6 != &local_158) {
    local_208 = (longlong *)*puVar6;
    uStack_200 = *(undefined4 *)(puVar6 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_208);
  }
  local_1d8 = 0x27;
  bVar9 = false;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  uStack_22c = 6;
  uVar15 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_e8,uVar7,uVar15);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 6;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_108,uVar7 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 0xf;
  local_238 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 0xf;
  local_238 = (longlong *)0x1000000000000ee;
  plVar14 = param_1;
  FUN_140e87170(&local_238,DAT_1419fe158,0x80000000,&local_138,param_1,param_2);
  uVar10 = (undefined4)((ulonglong)plVar14 >> 0x20);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_208 = (longlong *)local_e8;
  uStack_200 = uStack_e0;
  uStack_1fc = uStack_dc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_208);
  local_178 = &local_1c8;
  local_208 = (longlong *)local_108;
  uStack_200 = uStack_100;
  uStack_1fc = uStack_fc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_208);
  local_170 = local_1b8;
  local_208 = (longlong *)local_128;
  uStack_200 = uStack_120;
  uStack_1fc = uStack_11c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_208);
  local_168 = local_1a8;
  local_208 = local_138;
  uStack_200 = uStack_130;
  uStack_1fc = uStack_12c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_208);
  local_160 = local_198;
  ppuVar13 = &local_178;
  uVar7 = CONCAT44(uVar10,DAT_1419fd548);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_228,4,uVar7,ppuVar13);
  uStack_22c = 0;
  local_238 = (longlong *)0x4048000000000000;
  iVar2 = FUN_140e851f0(uVar4,&local_238,DAT_141955260,1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    uStack_22c = 6;
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_141a0a828,0x80000000,&local_98,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    iVar2 = FUN_140e851f0(&local_158,&local_98,DAT_141955260,0);
    if (iVar2 == 0) {
      cVar1 = FUN_140e491e0(uVar3);
      bVar9 = cVar1 == '\0';
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0xd;
  if (bVar9) {
    local_188 = 0x3ff0000000000000;
  }
  else {
    local_188 = 0;
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  FUN_140e87930(uVar3,DAT_141a0d3e8,0x80000000,&local_188);
LAB_140d6e132:
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

