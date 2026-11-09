// gml_Script_truestate_switch @ 0x140628ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_truestate_switch
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 **ppuVar10;
  double local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  double local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_b0 = "gml_Script_truestate_enqueue";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x42;
  _eh_vector_constructor_iterator_(&local_68,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_84 = 0;
  local_90 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_ec = 0;
  local_f8 = 0.0;
  local_a8 = 0x45;
  iVar2 = FUN_140e4a740(&local_90);
joined_r0x0001406290d4:
  do {
    if (iVar2 < 1) {
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      _eh_vector_destructor_iterator_(&local_68,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_b8;
      return param_3;
    }
    iVar2 = iVar2 + -1;
    local_a8 = 0x46;
    iVar3 = FUN_140e4a740(&local_f8);
    if (iVar3 < param_4) {
      puVar8 = *(undefined8 **)(param_5 + (longlong)iVar3 * 8);
      if (puVar8 != &local_c8) goto LAB_140629120;
    }
    else {
      puVar8 = &DAT_1419df7b0;
LAB_140629120:
      local_a0 = *puVar8;
      uStack_98 = puVar8[1];
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_a0);
    }
    local_a8 = 0x47;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00298);
    local_80 = &local_c8;
    uVar7 = FUN_140e63610(param_1,param_2,&local_e8,1,uVar6,&local_80);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar7);
    if (cVar1 == '\0') {
      local_a8 = 0x4a;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      local_a0 = _DAT_141dd4fa8;
      uStack_98 = uRam0000000141dd4fb0;
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_a0);
      local_80 = &local_68;
      ppuVar10 = &local_80;
      uVar6 = 1;
      puVar8 = &local_e8;
      uVar4 = DAT_141a03478;
    }
    else {
      local_a8 = 0x48;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00108);
      if (puVar8 != &local_58) {
        local_a0 = *puVar8;
        uStack_98 = puVar8[1];
        if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_58);
        }
        FUN_140041b80(&local_58,&local_a0);
      }
      local_78 = &local_58;
      local_70 = &local_c8;
      ppuVar10 = &local_78;
      uVar6 = 2;
      puVar8 = &local_d8;
      uVar4 = DAT_1419fffb8;
    }
    FUN_140e634e0(param_1,param_2,puVar8,uVar6,CONCAT44(uVar9,uVar4),ppuVar10);
    local_a8 = 0x4b;
    uVar5 = local_ec & 0xffffff;
    if (uVar5 == 0) {
LAB_14062934a:
      local_f8 = local_f8 + 1.0;
      goto joined_r0x0001406290d4;
    }
    if (uVar5 == 1) {
      local_f8 = (double)FUN_140e4b060(&local_f8);
      local_ec = 0;
      goto LAB_14062934a;
    }
    if (uVar5 == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + 1);
    }
    else if (uVar5 == 10) {
      local_f8 = (double)((longlong)local_f8 + 1);
    }
    else {
      if (uVar5 == 0xd) {
        local_ec = 0;
        goto LAB_14062934a;
      }
      FUN_140042910(&DAT_14172c3d8,&local_f8,&local_f8);
    }
  } while( true );
}

