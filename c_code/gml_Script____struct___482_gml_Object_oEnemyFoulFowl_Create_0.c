// gml_Script____struct___482_gml_Object_oEnemyFoulFowl_Create_0 @ 0x1409d4ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___482_gml_Object_oEnemyFoulFowl_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 **ppuVar8;
  undefined8 **in_stack_fffffffffffffe60;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_150 = "gml_Script_anon@5151@___struct___482@gml_Object_oEnemyFoulFowl_Create_0";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0xf4;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_74 = 0xffffff;
  local_80 = 0;
  local_17c = 0;
  local_188 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0xf6;
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000100000143;
  local_178 = (longlong *)0x100000100000143;
  uStack_170 = uStack_190;
  uStack_16c = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_178);
  local_b8 = &local_128;
  local_198 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_190 = DAT_1419df7b8;
  uStack_18c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_198);
  local_b0 = local_118;
  ppuVar8 = &local_b8;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_188,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_148 = 0xf8;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
    local_140 = 0;
    local_138 = 0;
    local_134 = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if (puVar5 != &local_108) {
      local_198 = (longlong *)*puVar5;
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_198);
    }
    local_a8 = &local_108;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc6ec4,_DAT_141dc6ec0);
    uStack_190 = uRam0000000141dc6ec8;
    uStack_18c = uRam0000000141dc6ecc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_198);
    local_a0 = local_f8;
    local_198 = (longlong *)CONCAT44(uRam00000001419ea9c4,_DAT_1419ea9c0);
    uStack_190 = uRam00000001419ea9c8;
    uStack_18c = uRam00000001419ea9cc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
    local_98 = local_e8;
    FUN_140e609c0(param_1);
    in_stack_fffffffffffffe60 = &local_a8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_140,3,CONCAT44(uVar9,DAT_141a00c58),
                           in_stack_fffffffffffffe60);
    if (puVar5 != puVar6) {
      local_198 = (longlong *)*puVar5;
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_198);
    }
    FUN_140e60910(1);
    local_148 = 0xf9;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_198 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
    local_b8 = &local_128;
    local_198 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_b0 = local_118;
    ppuVar8 = &local_b8;
    uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_188,2,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_148 = 0xfb;
      uStack_18c = 0xf;
      local_198 = (longlong *)0x100000100000142;
      local_178 = (longlong *)0x100000100000142;
      uStack_170 = uStack_190;
      uStack_16c = 0xf;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_178);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
      local_148 = 0xfc;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_168);
      local_148 = 0xfd;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_cc = 0;
      local_d8 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
    }
  }
  local_148 = 0x103;
  uStack_16c = 6;
  in_stack_fffffffffffffe60 =
       (undefined8 **)((ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  uVar7 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_141a0a728,0x80000000,&local_90,uVar7,in_stack_fffffffffffffe60);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 0xf;
  local_178 = (longlong *)0x100000100000142;
  iVar2 = FUN_140e851f0(&local_90,&local_178,DAT_141955260,0);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar2 == 0) {
    local_148 = 0x105;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_60,uVar7,
                  (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar7 >> 0x20);
    local_198 = (longlong *)CONCAT44(uRam0000000141dc6ec4,_DAT_141dc6ec0);
    uStack_190 = uRam0000000141dc6ec8;
    uStack_18c = uRam0000000141dc6ecc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
    local_b8 = &local_128;
    in_stack_fffffffffffffe60 = &local_b8;
    uVar7 = CONCAT44(uVar9,DAT_141a0a0d8);
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_188,1,uVar7,in_stack_fffffffffffffe60);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_178,puVar5);
    }
    uStack_18c = 0;
    local_198 = (longlong *)0x3ff8000000000000;
    FUN_140042560(&local_178,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    iVar2 = FUN_140e851f0(&local_60,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar2) {
      local_148 = 0x107;
      uStack_18c = 0xf;
      local_198 = (longlong *)0x100000100000141;
      local_178 = (longlong *)0x100000100000141;
      uStack_170 = uStack_190;
      uStack_16c = 0xf;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_178);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
      local_148 = 0x108;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_168);
      local_148 = 0x109;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_cc = 0;
      local_d8 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
    }
    local_148 = 0x10b;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0xbfb999999999999a;
  }
  local_148 = 0x10e;
  uStack_18c = 6;
  ppuVar8 = (undefined8 **)(uVar7 & 0xffffffffffffff00);
  local_198 = param_1;
  FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_90,ppuVar8,
                (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uStack_18c = 0xf;
  local_198 = (longlong *)0x100000100000141;
  iVar2 = FUN_140e851f0(&local_90,&local_198,DAT_141955260,0);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  if (iVar2 == 0) {
    local_148 = 0x110;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if (puVar5 != &local_128) {
      local_198 = (longlong *)*puVar5;
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_198);
    }
    local_b8 = &local_128;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc6ec4,_DAT_141dc6ec0);
    uStack_190 = uRam0000000141dc6ec8;
    uStack_18c = uRam0000000141dc6ecc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_b0 = local_118;
    local_198 = (longlong *)CONCAT44(uRam00000001419ea9c4,_DAT_1419ea9c0);
    uStack_190 = uRam00000001419ea9c8;
    uStack_18c = uRam00000001419ea9cc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_198);
    local_a8 = &local_108;
    FUN_140e609c0(param_1);
    ppuVar10 = &local_b8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_188,3,CONCAT44(uVar9,DAT_141a00c58),ppuVar10);
    if (puVar5 != puVar6) {
      local_198 = (longlong *)*puVar5;
      uStack_190 = *(undefined4 *)(puVar5 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_198);
    }
    FUN_140e60910(1);
    local_148 = 0x111;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_198 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
    local_b8 = &local_128;
    local_198 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_198);
    local_b0 = local_118;
    ppuVar8 = &local_b8;
    uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_188,2,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_148 = 0x113;
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      local_140 = 0;
      local_138 = 0;
      local_134 = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar4,DAT_141a55540,0x80000000,&local_70,(ulonglong)ppuVar8 & 0xffffffffffffff00
                    ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
      local_198 = (longlong *)CONCAT44(uRam0000000141dd8a4c,_DAT_141dd8a48);
      uStack_190 = uRam0000000141dd8a50;
      uStack_18c = DAT_141dd8a54;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_198);
      local_a8 = &local_108;
      uVar4 = FUN_140069500(uVar4);
      FUN_140e63610(uVar4,param_2,&local_140,1,&local_70,&local_a8);
      local_148 = 0x114;
      goto LAB_1409d5ab9;
    }
  }
  uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  local_148 = 0x119;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar5 != &local_128) {
    local_198 = (longlong *)*puVar5;
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
  }
  local_b8 = &local_128;
  local_198 = (longlong *)CONCAT44(uRam0000000141dc6ec4,_DAT_141dc6ec0);
  uStack_190 = uRam0000000141dc6ec8;
  uStack_18c = uRam0000000141dc6ecc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_198);
  local_b0 = local_118;
  local_198 = (longlong *)CONCAT44(uRam00000001419ea9c4,_DAT_1419ea9c0);
  uStack_190 = uRam00000001419ea9c8;
  uStack_18c = uRam00000001419ea9cc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_198);
  local_a8 = &local_108;
  FUN_140e609c0(param_1);
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_188,3,CONCAT44(uVar9,DAT_141a00c58),&local_b8);
  if (puVar5 != puVar6) {
    local_198 = (longlong *)*puVar5;
    uStack_190 = *(undefined4 *)(puVar5 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_198);
  }
  FUN_140e60910(1);
  local_148 = 0x11b;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_188,0,uVar4,0);
  local_148 = 0x11c;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  uVar11 = 0;
  FUN_140e63610(param_1,param_2,&local_188,0,uVar7,0);
  local_148 = 0x11e;
  if (puVar3 != &local_168) {
    local_198 = (longlong *)*puVar3;
    uStack_190 = *(undefined4 *)(puVar3 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_168);
  local_148 = 0x11f;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_80,uVar7 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  FUN_1400460e0(&local_80,puVar3);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_80);
LAB_1409d5ab9:
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

