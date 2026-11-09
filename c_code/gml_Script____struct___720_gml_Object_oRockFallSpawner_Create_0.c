// gml_Script____struct___720_gml_Object_oRockFallSpawner_Create_0 @ 0x140cb2fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___720_gml_Object_oRockFallSpawner_Create_0
               (longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_140 = "gml_Object_oRockFall_Step_0";
  local_138 = 0;
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_44 = 0xffffff;
  local_50 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_138 = 1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_140042560(&local_178,uVar3);
  FUN_1400460e0(uVar5,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_138 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9708);
  uStack_17c = 6;
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_141a0a778,0x80000000,&local_50,uVar7,in_stack_fffffffffffffe70);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_140042560(&local_178,uVar3);
  FUN_1400460e0(&local_50,&local_178);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_50);
  local_138 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_17c = 6;
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_f8,uVar7,in_stack_fffffffffffffe70);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_180 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_188,puVar4);
  }
  FUN_140042560(&local_188,uVar3);
  uStack_16c = uStack_ec;
  uStack_170 = uStack_f0;
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_178 = local_f8;
  }
  else {
    FUN_1400419b0(&local_178,&local_f8);
  }
  FUN_1400460e0(&local_178,&local_188);
  local_168 = (undefined4)local_178;
  uStack_164 = local_178._4_4_;
  uStack_160 = uStack_170;
  uStack_15c = uStack_16c;
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_168);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_138 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_17c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_118,uVar7,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_170 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_178 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_178,puVar4);
  }
  FUN_140042560(&local_178,uVar3);
  uStack_17c = uStack_10c;
  uStack_180 = uStack_110;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
    local_188 = local_118;
  }
  else {
    FUN_1400419b0(&local_188,&local_118);
  }
  FUN_1400460e0(&local_188,&local_178);
  local_168 = (undefined4)local_188;
  uStack_164 = local_188._4_4_;
  uStack_160 = uStack_180;
  uStack_15c = uStack_17c;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_168);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_138 = 7;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_98 = &local_108;
  local_90 = &local_128;
  uStack_17c = 0xf;
  local_188 = (longlong *)0x100000000000149;
  local_168 = 0x149;
  uStack_164 = 0x1000000;
  uStack_160 = uStack_180;
  uStack_15c = 0xf;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_168);
  local_88 = local_60;
  ppuVar9 = &local_98;
  uVar7 = CONCAT44(uVar8,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_138 = 8;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_17c = 0;
    local_188 = (longlong *)0xbfe0000000000000;
    FUN_140042560(uVar5,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_138 = 9;
    uStack_17c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_f8,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_168 = (undefined4)local_f8;
    uStack_164 = local_f8._4_4_;
    uStack_160 = uStack_f0;
    uStack_15c = uStack_ec;
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_168);
  }
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_138 = 0xb;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_98 = &local_108;
  local_90 = &local_128;
  uStack_17c = 0xf;
  local_188 = (longlong *)0x100000000000149;
  local_168 = 0x149;
  uStack_164 = 0x1000000;
  uStack_160 = uStack_180;
  uStack_15c = 0xf;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_168);
  local_88 = local_60;
  ppuVar9 = &local_98;
  uVar7 = CONCAT44(uVar8,DAT_141a12628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,3,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_17c = 0;
    local_188 = (longlong *)0x3fd3333333333333;
    iVar2 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (0 < iVar2) {
      local_138 = 0xc;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      uStack_17c = 0;
      local_188 = (longlong *)0x0;
      iVar2 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (iVar2 < 1) {
        local_138 = 0x17;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        uStack_17c = 0;
        local_188 = (longlong *)0xbfd3333333333333;
        FUN_140042560(uVar5,&local_188);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_138 = 0x18;
        uStack_17c = 6;
        ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
        uVar7 = uVar7 & 0xffffffffffffff00;
        local_188 = param_1;
        FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_118,uVar7,ppuVar9);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
      }
      else {
        local_138 = 0xd;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f97e8);
        FUN_140046040(uVar5);
        local_138 = 0xe;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f97e8);
        uStack_17c = 0;
        local_188 = (longlong *)0x3ff0000000000000;
        iVar2 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,1);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if (0 < iVar2) {
          local_138 = 0xf;
          FUN_140edd0e0(param_1,param_2,0,0);
          local_138 = 0x10;
          goto LAB_140cb3fa6;
        }
        local_138 = 0x12;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        uStack_17c = 0;
        local_188 = (longlong *)0xbfd999999999999a;
        FUN_140042560(uVar5,&local_188);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_138 = 0x13;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        uStack_17c = 0;
        local_188 = (longlong *)0x3fe4cccccccccccd;
        FUN_140042560(uVar5,&local_188);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_138 = 0x14;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9708);
        uStack_17c = 0;
        local_188 = (longlong *)0x3fe0000000000000;
        FUN_140042560(uVar5,&local_188);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_138 = 0x15;
        uStack_17c = 6;
        ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
        uVar7 = uVar7 & 0xffffffffffffff00;
        local_188 = param_1;
        FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_118,uVar7,ppuVar9);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
      }
      local_168 = (undefined4)local_118;
      uStack_164 = local_118._4_4_;
      uStack_160 = uStack_110;
      uStack_15c = uStack_10c;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_168);
    }
  }
  local_138 = 0x1c;
  local_168 = (undefined4)local_108;
  uStack_164 = local_108._4_4_;
  uStack_160 = uStack_100;
  uStack_15c = uStack_fc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_168);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_a8);
  local_138 = 0x1d;
  local_168 = (undefined4)local_128;
  uStack_164 = local_128._4_4_;
  uStack_160 = uStack_120;
  uStack_15c = uStack_11c;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_168);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_b8);
  local_138 = 0x1f;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f97e8);
  uStack_17c = 0;
  local_188 = (longlong *)0x3ff0000000000000;
  iVar2 = FUN_140e851f0(uVar5,&local_188,DAT_141955260,0);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if (iVar2 == 0) {
    local_138 = 0x20;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uStack_17c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_141a0f7f8,0x80000000,&local_e8,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_168 = (undefined4)local_e8;
    uStack_164 = local_e8._4_4_;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_168);
    local_98 = &local_80;
    local_168 = _DAT_141dc7580;
    uStack_164 = uRam0000000141dc7584;
    uStack_160 = uRam0000000141dc7588;
    uStack_15c = uRam0000000141dc758c;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_168);
    local_90 = &local_70;
    uStack_17c = 0;
    local_188 = (longlong *)0x3fa47ae147ae147b;
    FUN_140042560(&local_188,uVar3);
    local_168 = (undefined4)local_188;
    uStack_164 = local_188._4_4_;
    uStack_160 = uStack_180;
    uStack_15c = uStack_17c;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_168);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_88 = local_60;
    ppuVar9 = &local_98;
    uVar7 = CONCAT44(uVar8,DAT_141a00c58);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar7,ppuVar9);
    if (puVar4 != &local_d8) {
      local_168 = *(undefined4 *)puVar4;
      uStack_164 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_160 = *(undefined4 *)(puVar4 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_168);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_d8);
    local_138 = 0x21;
    uStack_17c = 6;
    uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_141a0f7f8,0x80000000,&local_e8,uVar7,uVar10);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_168 = (undefined4)local_e8;
    uStack_164 = local_e8._4_4_;
    uStack_160 = uStack_e0;
    uStack_15c = uStack_dc;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_c8);
    local_138 = 0x23;
    uStack_17c = 6;
    local_188 = param_1;
    FUN_140e87440(&local_188,DAT_141a0f7f8,0x80000000,&local_e8,uVar7 & 0xffffffffffffff00,
                  uVar10 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_17c = 0;
    local_188 = (longlong *)0x3fa999999999999a;
    iVar2 = FUN_140e851f0(&local_e8,&local_188,DAT_141955260,1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar2 != -2 && iVar2 < 0) {
      local_138 = 0x24;
      FUN_140edd0e0(param_1,param_2,0,0);
      local_138 = 0x25;
    }
  }
LAB_140cb3fa6:
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return;
}

