// gml_Script_draw_sprite_radial @ 0x14043a790

undefined8 *
gml_Script_draw_sprite_radial
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  code *pcVar8;
  undefined4 uVar10;
  longlong *plVar9;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [8];
  undefined4 *local_78 [2];
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res20 = 0;
  local_e0 = "gml_Script_PoisonDealDamage";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 2;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  bVar6 = 0xff;
  local_11c = 0xffffff;
  local_128 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 4;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    FUN_140e87440(&DAT_1419df7b0,DAT_141a1f090,0x80000000,&local_128,
                  (ulonglong)pcVar8 & 0xffffffffffffff00,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
LAB_14043a8b4:
    FUN_1400462a0(&local_128,&DAT_1419df7b0);
    if (param_4 < 1) {
      FUN_140e87930(&DAT_1419df7b0,DAT_141a1f090,0x80000000,&local_128);
      goto LAB_14043a8fd;
    }
  }
  else {
    FUN_140e87440(*param_5,DAT_141a1f090,0x80000000,&local_128,
                  (ulonglong)pcVar8 & 0xffffffffffffff00,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    if (param_4 < 2) goto LAB_14043a8b4;
    FUN_1400462a0(&local_128,param_5[1]);
  }
  FUN_140e87930(*param_5,DAT_141a1f090,0x80000000,&local_128);
  puVar5 = (undefined8 *)*param_5;
LAB_14043a8fd:
  local_d8 = 6;
  plVar9 = local_res8;
  FUN_140e87170(puVar5,DAT_141a1f580,0x80000000,&local_d0,local_res8,local_res10);
  uStack_13c = 0xf;
  local_148 = 0x1000000000000ee;
  iVar2 = FUN_140e851f0(&local_d0,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 == 0) {
    local_d8 = 8;
    uStack_13c = 0xf;
    local_148 = 0x100000000000147;
    iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_148);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if (0 < iVar2) {
      do {
        uVar10 = (undefined4)((ulonglong)plVar9 >> 0x20);
        local_d8 = 10;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7048);
        FUN_140e609c0(local_res8);
        uStack_9c = 0xf;
        local_a8 = 0x100000100000020;
        if (&local_a8 != puVar5) {
          local_f8 = 0x20;
          uStack_f4 = 0x1000001;
          uStack_f0 = uStack_a0;
          uStack_ec = 0xf;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_f8);
        }
        FUN_140e60910(1);
        local_d8 = 0xb;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f7028);
        puVar3 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f7048);
        if (puVar3 != local_98) {
          local_f8 = *puVar3;
          uStack_f4 = puVar3[1];
          uStack_f0 = puVar3[2];
          uStack_ec = puVar3[3];
          if ((1 << ((byte)local_98[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_f8);
        }
        local_78[0] = local_98;
        plVar9 = (longlong *)CONCAT44(uVar10,DAT_141a047c8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_138,1,plVar9,local_78);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_148 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_148,puVar5);
        }
        local_res20 = 1;
        FUN_140042560(&local_148,uVar4);
        local_f8 = (undefined4)local_148;
        uStack_f4 = local_148._4_4_;
        uStack_f0 = uStack_140;
        uStack_ec = uStack_13c;
        if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_f8);
        local_res20 = 0;
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_d8 = 0xc;
        local_f8 = (undefined4)local_108;
        uStack_f4 = local_108._4_4_;
        uStack_f0 = uStack_100;
        uStack_ec = uStack_fc;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
        local_b4 = 0xf;
        local_c0 = 0x100000000000106;
        FUN_140e86c30(&local_c0,DAT_141a0a7e8,1,&local_118);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
        uVar7 = uStack_fc;
      } while (cVar1 != '\0');
      param_3 = local_res18;
    }
    bVar6 = (byte)uVar7;
    FUN_140e63970(local_68,&local_res8,&local_res10);
    if (local_58 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << (bVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

