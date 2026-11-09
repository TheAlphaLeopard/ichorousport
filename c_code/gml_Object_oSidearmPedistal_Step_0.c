// gml_Object_oSidearmPedistal_Step_0 @ 0x140d818c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oSidearmPedistal_Step_0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong **pplVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong *local_res8;
  ulonglong local_res10;
  undefined4 local_res18;
  code *pcVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 uVar13;
  undefined8 **ppuVar12;
  ulonglong in_stack_fffffffffffffde0;
  longlong **pplVar14;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  longlong *local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_190 = "gml_Script_anon@724@gml_Object_oSidearmPedistal_Create_0";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0x25;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_144 = 0xffffff;
  local_150 = (longlong *)0x0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_1ec = 0;
  uVar7 = 0;
  local_1f8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0x27;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
  uStack_210._4_4_ = 0xd;
  local_218 = (longlong *)0x0;
  local_208 = (longlong *)0x0;
  uStack_200._0_4_ = (uint)uStack_210;
  uStack_200._4_4_ = 0xd;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_208);
  FUN_140e87930(puVar3,DAT_141a0ab68,0x80000000,&local_128);
  local_188 = 0x28;
  uStack_200._4_4_ = 0xf;
  local_208 = (longlong *)0x100000000000106;
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_141a0a958,0x80000000,&local_138,uVar9,in_stack_fffffffffffffde0);
  if ((1 << ((byte)uStack_200._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_200 = (ulonglong)(uint)uStack_200;
  local_208 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_138,&local_208,DAT_141955260,0);
  if ((1 << ((byte)(uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if (iVar2 != 0) {
    local_188 = 0x2a;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uStack_200._4_4_ = 0xf;
    local_208 = (longlong *)0x1000000000000ee;
    FUN_140e87170(&local_208,DAT_1419fe0e8,0x80000000,&local_a8,local_res8,local_res10);
    if ((1 << ((byte)uStack_200._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_200._4_4_ = 0xf;
    local_208 = (longlong *)0x1000000000000ee;
    plVar10 = local_res8;
    uVar9 = local_res10;
    FUN_140e87170(&local_208,DAT_1419fe158,0x80000000,&local_150,local_res8,local_res10);
    if ((1 << ((byte)uStack_200._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_200._4_4_ = 6;
    local_208 = local_res8;
    uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
    FUN_140e87440(&local_208,DAT_141a1b910,0x80000000,&local_b8,uVar11,uVar9 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)uStack_200._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_218 = (longlong *)local_a8;
    uStack_210 = CONCAT44(uStack_9c,uStack_a0);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_218);
    local_118 = &local_1d8;
    uStack_200 = CONCAT44(local_144,local_148);
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
      local_208 = local_150;
    }
    else {
      FUN_1400419b0(&local_208,&local_150);
    }
    local_res18 = 1;
    uStack_210._4_4_ = 7;
    local_218 = (longlong *)CONCAT44(local_218._4_4_,8);
    FUN_1400462a0(&local_208,&local_218);
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = local_208;
    uStack_210 = uStack_200;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
    if ((1 << ((byte)(uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_110 = &local_1c8;
    local_218 = (longlong *)local_b8;
    uStack_210 = CONCAT44(uStack_ac,uStack_b0);
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
    local_108 = &local_1b8;
    uStack_210._4_4_ = 0xf;
    local_218 = (longlong *)0x100000000000117;
    local_208 = (longlong *)0x100000000000117;
    uStack_200 = CONCAT44(0xf,(uint)uStack_210);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_208);
    local_100 = local_1a8;
    pplVar14 = &local_118;
    uVar9 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,4,uVar9,pplVar14);
    iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
        local_188 = 0x2c;
        pplVar5 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
        uStack_210._4_4_ = 0xf;
        local_218 = (longlong *)0x100000000000106;
        uVar11 = (ulonglong)pplVar14 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_218,DAT_141a0a958,0x80000000,&local_138,uVar9,uVar11);
        if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140e609c0(local_res8);
        if (&local_138 != pplVar5) {
          local_208 = local_138;
          uStack_200 = CONCAT44(uStack_12c,uStack_130);
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar5);
          }
          FUN_140041b80(pplVar5,&local_208);
        }
        FUN_140e60910(1);
        local_188 = 0x2d;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
        pplVar14 = (longlong **)(uVar11 & 0xffffffffffffff00);
        uVar9 = uVar9 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a0a9f8,0x80000000,&local_c8,uVar9,pplVar14);
        local_208 = local_c8;
        uStack_200 = CONCAT44(uStack_bc,uStack_c0);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_208);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_f8);
        local_188 = 0x2e;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        uVar4 = FUN_140e794b0(0,0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = uVar4;
        local_188 = 0x2f;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        *puVar6 = 0xbff8000000000000;
        cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_98,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    in_stack_fffffffffffffde0 = (ulonglong)pplVar14 & 0xffffffffffffff00;
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(puVar3,DAT_141a0ab68,0x80000000,&local_128,uVar9,in_stack_fffffffffffffde0);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    if (local_88 != 0) {
      FUN_140e4cd60();
      local_88 = 0;
    }
  }
  local_188 = 0x34;
  if (puVar3 != &local_160) {
    local_218 = (longlong *)*puVar3;
    uStack_210._0_4_ = *(uint *)(puVar3 + 1);
    uStack_210._4_4_ = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_218);
  }
  (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
  uStack_210._4_4_ = 0xf;
  local_218 = (longlong *)0x100000000000106;
  FUN_140e87930(&local_218,DAT_141a0a958,0x80000000,&local_160);
  if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_188 = 0x36;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57b30);
  FUN_140e87440(uVar4,DAT_141a0a908,0x80000000,&local_d8,uVar9 & 0xffffffffffffff00,
                in_stack_fffffffffffffde0 & 0xffffffffffffff00);
  local_218 = (longlong *)CONCAT44(uRam0000000141dc76f4,_DAT_141dc76f0);
  uStack_210 = CONCAT44(uRam0000000141dc76fc,uRam0000000141dc76f8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_218);
  local_118 = &local_1d8;
  uVar4 = FUN_140069500(uVar4);
  puVar3 = &local_d8;
  puVar6 = (undefined8 *)FUN_140e63610(uVar4,local_res10,&local_1e8,0,puVar3,0);
  uVar13 = (undefined4)((ulonglong)puVar3 >> 0x20);
  if (puVar6 != &local_1c8) {
    local_218 = (longlong *)*puVar6;
    uStack_210 = puVar6[1];
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
  }
  local_110 = &local_1c8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_180,1,CONCAT44(uVar13,DAT_141a0a0d8),
                         &local_118);
  if (puVar3 != &local_1b8) {
    local_218 = (longlong *)*puVar3;
    uStack_210 = puVar3[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
  }
  local_108 = &local_1b8;
  ppuVar12 = &local_110;
  gml_GlobalScript_BOSSMODSINIT(local_res8,local_res10,&local_1f8,2,ppuVar12);
  uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  local_188 = 0x38;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_210._4_4_ = 0xf;
  local_218 = (longlong *)0x100000000000116;
  local_208 = (longlong *)0x100000000000116;
  uStack_200 = CONCAT44(0xf,(uint)uStack_210);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_208);
  local_118 = &local_1d8;
  pplVar14 = &local_118;
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1f8,1,CONCAT44(uVar13,DAT_141a02ef8),pplVar14)
  ;
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_188 = 0x39;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_218 = (longlong *)CONCAT44(uRam0000000141ddb7ec,_DAT_141ddb7e8);
    uStack_210 = CONCAT44(DAT_141ddb7f4,uRam0000000141ddb7f0);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_218);
    local_110 = &local_1c8;
    local_218 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_210 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
    local_108 = &local_1b8;
    ppuVar12 = &local_110;
    puVar3 = (undefined8 *)gml_Script____struct___106(local_res8,local_res10,&local_1e8,2,ppuVar12);
    if (puVar3 != &local_170) {
      local_218 = (longlong *)*puVar3;
      uStack_210 = puVar3[1];
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_218);
    }
    local_188 = 0x3a;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uStack_210._4_4_ = 0xf;
    local_218 = (longlong *)0x100000000000116;
    FUN_140e87440(&local_218,DAT_1419ff7a8,0x80000000,&local_e8,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00,(ulonglong)pplVar14 & 0xffffffffffffff00)
    ;
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    cVar1 = FUN_140e491e0(&local_170);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0xd;
    if (cVar1 == '\0') {
      uVar7 = 0x3ff00000;
    }
    local_1d8 = (ulonglong)uVar7 << 0x20;
    local_118 = &local_1d8;
    uStack_210._4_4_ = 0xf;
    local_218 = (longlong *)0x100000000000116;
    uVar4 = FUN_140069500(&local_218);
    FUN_140e63610(uVar4,local_res10,&local_1f8,1,&local_e8,&local_118);
    if ((1 << ((byte)uStack_210._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
  }
  local_188 = 0x3d;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = &DAT_bff0000000000000;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_1d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}

