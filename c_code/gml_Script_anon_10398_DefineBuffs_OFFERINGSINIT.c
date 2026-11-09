// gml_Script_anon_10398_DefineBuffs_OFFERINGSINIT @ 0x1403cb5d0

undefined8 *
gml_Script_anon_10398_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10 [2];
  undefined4 local_res20;
  undefined4 uVar8;
  ulonglong uVar7;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  longlong *local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_res20 = 0;
  local_180 = "gml_Script_anon@9990@DefineBuffs@OFFERINGSINIT";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x175;
  uVar8 = 1;
  local_res8 = param_1;
  local_res10[0] = param_2;
  _eh_vector_constructor_iterator_(local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x177;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uStack_1ec = *(undefined4 *)((longlong)param_5 + 0xc);
  uStack_1f0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_1f8 = (longlong *)*param_5;
  }
  else {
    FUN_1400419b0(&local_1f8);
  }
  local_res20 = 1;
  local_1fc = 0;
  local_208 = (longlong *)0x4004000000000000;
  FUN_140042560(&local_1f8,&local_208);
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1b8 = local_1f8;
  uStack_1b0 = CONCAT44(uStack_1ec,uStack_1f0);
  FUN_140041b80(&local_168,&local_1b8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_178 = 0x178;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x10000000000001f;
  local_1b8 = (longlong *)0x10000000000001f;
  uStack_1b0 = CONCAT44(0xf,uStack_190);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1b8);
  local_c8 = local_118;
  ppuVar9 = &local_c8;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(local_res8,local_res10[0],&local_1c8,1,uVar7,ppuVar9);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    ppuVar9 = (undefined1 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f57d8,0x80000000,&local_128,uVar7,ppuVar9);
    cVar2 = FUN_140e491e0(&local_128);
    if (cVar2 != '\0') {
      local_178 = 0x17a;
      local_1fc = 0xf;
      local_208 = (longlong *)0x1000000000000ee;
      iVar3 = FUN_140e63cb0(local_80,&local_res8,local_res10,&local_208);
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      uVar4 = local_168;
      if (0 < iVar3) {
        uVar1 = CONCAT44(uStack_15c,uStack_160);
        do {
          local_178 = 0x17c;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          local_1fc = 6;
          local_208 = local_res8;
          uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_138,uVar7,uVar10);
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          uStack_1ec = 6;
          local_1f8 = local_res8;
          uVar10 = uVar10 & 0xffffffffffffff00;
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_148,uVar7,uVar10);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          uStack_18c = 6;
          local_198 = local_res8;
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(&local_198,DAT_141a1b910,0x80000000,&local_158,uVar7,
                        uVar10 & 0xffffffffffffff00);
          uVar8 = (undefined4)(uVar7 >> 0x20);
          if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_1e8 = local_138;
          uStack_1e0 = CONCAT44(uStack_12c,uStack_130);
          if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_1e8);
          local_c0 = local_108;
          local_1e8 = local_148;
          uStack_1e0 = CONCAT44(uStack_13c,uStack_140);
          if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_1e8);
          local_b8 = local_f8;
          local_1e8 = local_158;
          uStack_1e0 = CONCAT44(uStack_14c,uStack_150);
          if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_1e8);
          local_b0 = local_e8;
          uStack_1b0 = CONCAT44(0xf,(undefined4)uStack_1b0);
          local_1b8 = (longlong *)0x10000000000001f;
          local_1e8 = 0x10000000000001f;
          uStack_1e0 = CONCAT44(0xf,(undefined4)uStack_1b0);
          if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_1e8);
          local_a8 = local_d8;
          ppuVar9 = &local_c0;
          uVar7 = CONCAT44(uVar8,DAT_141a0a7c8);
          uVar5 = FUN_140e634e0(local_res8,local_res10[0],&local_1d8,4,uVar7,ppuVar9);
          iVar3 = FUN_140e63cb0(local_a0,&local_res8,local_res10,uVar5);
          if (0 < iVar3) {
            do {
              local_178 = 0x17e;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
              FUN_140e609c0(local_res8);
              if (&local_168 != puVar6) {
                local_1e8 = uVar4;
                uStack_1e0 = uVar1;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                FUN_140041b80(puVar6,&local_1e8);
              }
              FUN_140e60910(1);
              cVar2 = FUN_140e643f0(local_a0,&local_res8,local_res10);
            } while (cVar2 != '\0');
          }
          FUN_140e63970(local_a0,&local_res8,local_res10);
          if (local_90 != 0) {
            FUN_140e4cd60();
          }
          cVar2 = FUN_140e643f0(local_80,&local_res8,local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_80,&local_res8,local_res10);
      local_178 = 0x182;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
      uStack_1b0 = CONCAT44(0xd,(undefined4)uStack_1b0);
      local_1b8 = (longlong *)0x0;
      local_1e8 = 0;
      uStack_1e0 = uStack_1b0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1e8);
      FUN_140e87930(uVar4,DAT_1419f57d8,0x80000000,&local_1a8);
      if (local_70 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}

