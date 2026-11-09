// gml_Script_BM_DRAW_TITLE @ 0x140240770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_BM_DRAW_TITLE(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined4 uVar8;
  double local_d8;
  uint local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 *local_90;
  double *local_88;
  undefined1 local_80 [32];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_c0 = "gml_Script_BM_NOINPUT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xea;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0xee;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a455f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xef;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45738);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xf0;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44be8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xf1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a45448);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xf5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a452d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xf6;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a449c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xf7;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44908);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xf9;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a456c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xfb;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_b8 = 0xfe;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 32769.0;
  bVar1 = true;
  do {
    uVar8 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    if (!bVar1) {
      local_b8 = 0xfe;
      uVar3 = local_cc & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_d8 = (double)((longlong)local_d8 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_cc = 0;
              goto LAB_140240a9f;
            }
            FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
          }
          goto LAB_140240aa9;
        }
        local_d8 = (double)FUN_140e4b060(&local_d8);
        local_cc = 0;
      }
LAB_140240a9f:
      local_d8 = local_d8 + 1.0;
    }
LAB_140240aa9:
    bVar1 = false;
    local_94 = 0;
    local_a0 = 0x40e0028000000000;
    iVar4 = FUN_140e851f0(&local_d8,&local_a0,DAT_141955260,1);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      _eh_vector_destructor_iterator_(local_80,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_c8;
      return param_3;
    }
    local_b8 = 0xff;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    local_60 = _DAT_141dc6330;
    uStack_5c = uRam0000000141dc6334;
    uStack_58 = uRam0000000141dc6338;
    uStack_54 = uRam0000000141dc633c;
    if ((1 << (local_80[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_60);
    local_90 = local_80;
    local_88 = &local_d8;
    pcVar7 = (code *)CONCAT44(uVar8,DAT_141a44ad8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_b0,2,pcVar7,&local_90);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 != '\0') {
      local_b8 = 0x100;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a44c68);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
    }
  } while( true );
}

