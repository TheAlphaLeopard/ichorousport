// gml_Object_oLeech_Draw_0 @ 0x140b3a690

undefined8 * gml_Object_oLeech_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  uint uVar9;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffe70;
  ulonglong uVar12;
  undefined1 **ppuVar13;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  longlong *local_80;
  undefined4 local_74;
  longlong *local_70;
  undefined4 local_64;
  undefined8 local_60;
  
  local_e0 = "gml_Script_anon@266@gml_Object_oLeech_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x16;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_15c = 0;
  uVar9 = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x18;
  local_60 = uVar3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_17c = 6;
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_148,uVar11,in_stack_fffffffffffffe70);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_188 = param_1;
  FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_158,uVar11,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  uStack_17c = uStack_13c;
  uStack_180 = uStack_140;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_188 = local_148;
  }
  else {
    FUN_1400419b0(&local_188,&local_148);
  }
  FUN_1400460e0(&local_188,puVar4);
  local_c8 = local_188;
  uStack_c0 = uStack_180;
  uStack_bc = uStack_17c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_c8);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_b8 = local_128;
  local_c8 = local_158;
  uStack_c0 = uStack_150;
  uStack_bc = uStack_14c;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_c8);
  local_b0 = local_118;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x100000000000149;
  local_c8 = (longlong *)0x100000000000149;
  uStack_c0 = uStack_170;
  uStack_bc = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_c8);
  local_a8 = local_108;
  uVar11 = CONCAT44(uVar8,DAT_141a12628);
  ppuVar13 = &local_b8;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_168,3,uVar11,&local_b8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_d8 = 0x1a;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar8 = (undefined4)*puVar4;
    }
    else {
      uVar8 = FUN_140e4b060(puVar4);
    }
    uVar3 = FUN_140e79500(uVar8);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_d8 = 0x1b;
    local_f8 = uVar3;
    while( true ) {
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      local_74 = 6;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_80 = param_1;
      FUN_140e87440(&local_80,DAT_1419fe0e8,0x80000000,&local_148,uVar11,uVar12);
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      local_64 = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_70 = param_1;
      FUN_140e87440(&local_70,DAT_1419fe158,0x80000000,&local_158,uVar11,uVar12 & 0xffffffffffffff00
                   );
      uVar8 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      uStack_17c = uStack_13c;
      uStack_180 = uStack_140;
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
        local_188 = local_148;
      }
      else {
        FUN_1400419b0(&local_188,&local_148);
      }
      FUN_1400460e0(&local_188,&local_f8);
      local_138 = (undefined4)local_188;
      uStack_134 = local_188._4_4_;
      uStack_130 = uStack_180;
      uStack_12c = uStack_17c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_b8 = local_128;
      local_138 = (undefined4)local_158;
      uStack_134 = local_158._4_4_;
      uStack_130 = uStack_150;
      uStack_12c = uStack_14c;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      local_b0 = local_118;
      uStack_bc = 0xf;
      local_c8 = (longlong *)0x100000000000149;
      local_138 = 0x149;
      uStack_134 = 0x1000000;
      uStack_130 = uStack_c0;
      uStack_12c = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_a8 = local_108;
      uVar11 = CONCAT44(uVar8,DAT_141a12628);
      ppuVar13 = &local_b8;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_168,3,uVar11,&local_b8);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_d8 = 0x1d;
      uStack_16c = 6;
      ppuVar13 = (undefined1 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_90,uVar11,ppuVar13);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_1400460e0(&local_90,&local_f8);
      FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_90);
    }
    local_d8 = 0x1f;
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_16c = 0;
    local_178 = (longlong *)0xbfe8000000000000;
    FUN_140042560(uVar3,&local_178);
    uVar3 = local_60;
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
  }
  local_d8 = 0x25;
  uStack_16c = 6;
  uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_90,uVar11,uVar12);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
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
  FUN_1400460e0(&local_90,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_90);
  local_d8 = 0x27;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_16c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_148,uVar11,uVar12);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_158,uVar11,uVar12 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_138 = (undefined4)local_148;
  uStack_134 = local_148._4_4_;
  uStack_130 = uStack_140;
  uStack_12c = uStack_13c;
  if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_138);
  local_b8 = local_128;
  uStack_17c = uStack_14c;
  uStack_180 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_188 = local_158;
  }
  else {
    FUN_1400419b0(&local_188,&local_158);
  }
  FUN_1400460e0(&local_188,puVar4);
  local_138 = (undefined4)local_188;
  uStack_134 = local_188._4_4_;
  uStack_130 = uStack_180;
  uStack_12c = uStack_17c;
  if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_138);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_b0 = local_118;
  uStack_bc = 0xf;
  local_c8 = (longlong *)0x100000000000149;
  local_138 = 0x149;
  uStack_134 = 0x1000000;
  uStack_130 = uStack_c0;
  uStack_12c = 0xf;
  if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_138);
  local_a8 = local_108;
  uVar11 = CONCAT44(uVar8,DAT_141a12628);
  ppuVar13 = &local_b8;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_168,3,uVar11,&local_b8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_d8 = 0x29;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar8 = (undefined4)*puVar4;
    }
    else {
      uVar8 = FUN_140e4b060(puVar4);
    }
    uVar3 = FUN_140e79500(uVar8);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 0;
    local_d8 = 0x2a;
    local_f8 = uVar3;
    while( true ) {
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_16c = 6;
      uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_148,uVar11,uVar12);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_64 = 6;
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_70 = param_1;
      FUN_140e87440(&local_70,DAT_1419fe158,0x80000000,&local_158,uVar11,uVar12 & 0xffffffffffffff00
                   );
      uVar8 = (undefined4)(uVar11 >> 0x20);
      if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      local_138 = (undefined4)local_148;
      uStack_134 = local_148._4_4_;
      uStack_130 = uStack_140;
      uStack_12c = uStack_13c;
      if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_138);
      local_b8 = local_128;
      uStack_17c = uStack_14c;
      uStack_180 = uStack_150;
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
        local_188 = local_158;
      }
      else {
        FUN_1400419b0(&local_188,&local_158);
      }
      FUN_1400460e0(&local_188,&local_f8);
      local_138 = (undefined4)local_188;
      uStack_134 = local_188._4_4_;
      uStack_130 = uStack_180;
      uStack_12c = uStack_17c;
      if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_138);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_b0 = local_118;
      uStack_bc = 0xf;
      local_c8 = (longlong *)0x100000000000149;
      local_138 = 0x149;
      uStack_134 = 0x1000000;
      uStack_130 = uStack_c0;
      uStack_12c = 0xf;
      if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_138);
      local_a8 = local_108;
      uVar11 = CONCAT44(uVar8,DAT_141a12628);
      ppuVar13 = &local_b8;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_168,3,uVar11,&local_b8);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_d8 = 0x2c;
      local_74 = 6;
      ppuVar13 = (undefined1 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
      uVar11 = uVar11 & 0xffffffffffffff00;
      local_80 = param_1;
      FUN_140e87440(&local_80,DAT_1419fe158,0x80000000,&local_a0,uVar11,ppuVar13);
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      FUN_1400460e0(&local_a0,&local_f8);
      FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
    }
    local_d8 = 0x2f;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdab8);
    uStack_16c = 0;
    local_178 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar3,&local_178,DAT_141955260,1);
    uVar3 = local_60;
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (iVar2 < 1) {
      local_d8 = 0x33;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
      local_d8 = 0x34;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0;
    }
    else {
      local_d8 = 0x30;
      uVar5 = (**(code **)(*param_1 + 0x10))();
      uStack_16c = 0;
      local_178 = (longlong *)0xbfeb333333333333;
      FUN_140042560(uVar5,&local_178);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
    }
    local_d8 = 0x37;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_16c = 0;
    local_178 = (longlong *)0x3fefae147ae147ae;
    FUN_140042560(uVar5,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_d8 = 0x39;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdab8);
    FUN_1400bdd80(uVar5);
    local_d8 = 0x3a;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3d18);
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3d18);
    cVar1 = FUN_140e491e0(uVar5);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar7);
    }
    *(undefined4 *)((longlong)plVar7 + 0xc) = 0xd;
    if (cVar1 == '\0') {
      uVar9 = 0x3ff00000;
    }
    *plVar7 = (ulonglong)uVar9 << 0x20;
  }
  local_d8 = 0x3e;
  uStack_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_a0,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
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
  FUN_1400460e0(&local_a0,&local_188);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a0);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

